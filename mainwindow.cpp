#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QMessageBox>
#include <fstream>
#include <QDragEnterEvent>
#include <QMimeData>
#include <QUrl>
#include <random>
#include <vector>

/*
    Justin Lam
    justinlam0624@csu.fullerton.edu
    CWID: 886399013
*/

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // basically all below here is just linkers to connect the buttons to the functions

    // connects the encrypt button to the onEncryptButtonClicked function
    connect(ui->encryptButton, &QPushButton::clicked, this, &MainWindow::onEncryptButtonClicked);

    // connects the decrypt button to the onDecryptButtonClicked function
    connect(ui->decryptButton, &QPushButton::clicked, this, &MainWindow::onDecryptButtonClicked);

    // connects the generate Key button to the onGenerateKeyButtonClicked function
    connect(ui->generateKeyButton, &QPushButton::clicked, this, &MainWindow::onGenerateKeyButtonClicked);
}

MainWindow::~MainWindow()
{
    delete ui;
}

// function that generates a random key of a specified length
std::string MainWindow::generateRandomKey(size_t length)
{
    const std::string characters = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    std::random_device rd;  // Random device for seeding
    std::mt19937 generator(rd());  // Mersenne Twister engine
    std::uniform_int_distribution<> dist(0, characters.size() - 1);

    std::string key;
    for (size_t i = 0; i < length; ++i)
    {
        key += characters[dist(generator)];
    }

    return key;
}

void MainWindow::onGenerateKeyButtonClicked()
{
    // generates a random key that has a length of 16 (can be changed but due to efficiency kept it 16)
    std::string randomKey = generateRandomKey(16);

    // Displays the generated key in the key input field
    ui->keyInput->setPlainText(QString::fromStdString(randomKey));
}

// function to encrypt text using XOR with a key
std::string MainWindow::block_encrypt(const std::string &data, const std::string &key)
{
    std::string encrypted_data = data;
    for (size_t i = 0; i < data.size(); ++i)
    {
        encrypted_data[i] = data[i] ^ key[i % key.size()]; // XOR encryption
    }
    return encrypted_data;
}

// function to decrypt text using XOR with a key
std::string MainWindow::block_decrypt(const std::string &data, const std::string &key)
{
    return block_encrypt(data, key); // XORing again with the same key decrypts
}

// processes the file in chunks due to error in reading long files that was encountered when I did lorum ipsum a bunch of times
void MainWindow::processFile(const QString &inputFile, const QString &outputFile, const std::string &key, bool encrypt)
{
    const size_t bufferSize = 4096; // Process in 4KB chunks

    std::ifstream input(inputFile.toStdString(), std::ios::binary);
    std::ofstream output(outputFile.toStdString(), std::ios::binary);

    if (!input.is_open())
    {
        QMessageBox::warning(this, "Error", "Unable to open input file.");
        return;
    }

    if (!output.is_open())
    {
        QMessageBox::warning(this, "Error", "Unable to open output file.");
        input.close();
        return;
    }

    std::vector<char> buffer(bufferSize);
    while (input.read(buffer.data(), bufferSize))
    {
        std::string chunk(buffer.data(), input.gcount());

        std::string processed_chunk = encrypt ? block_encrypt(chunk, key) : block_decrypt(chunk, key);

        output.write(processed_chunk.data(), processed_chunk.size());
    }

    // Processes the final partial chunk, if any left
    if (input.gcount() > 0)
    {
        std::string chunk(buffer.data(), input.gcount());

        std::string processed_chunk = encrypt ? block_encrypt(chunk, key) : block_decrypt(chunk, key);

        output.write(processed_chunk.data(), processed_chunk.size());
    }

    input.close();
    output.close();
}

void MainWindow::onEncryptButtonClicked()
{
    QString inputFile = ui->inputFilePath->toPlainText();
    QString outputFile = ui->outputFilePath->toPlainText();
    QString keyInput = ui->keyInput->toPlainText();

    if (inputFile.isEmpty() || outputFile.isEmpty())
    {
        QMessageBox::warning(this, "Input Error", "Please fill in all the fields correctly.");
        return;
    }

    std::string key;

    // Checks if the keyInput is a file path or a direct key
    QFileInfo keyInfo(keyInput);
    if (keyInfo.exists() && keyInfo.isFile())
    {
        // If the key input is a file, read key from the file
        std::ifstream keyFile(keyInput.toStdString());
        if (keyFile.is_open())
        {
            std::getline(keyFile, key);  // Read the first line of the file as the key
            keyFile.close();
        }
        else
        {
            QMessageBox::warning(this, "Error", "Could not open key file.");
            return;
        }
    }
    else
    {
        // Treat the keyInput like the actual key
        key = keyInput.toStdString();
    }

    // If no key was provided or found, creates one
    if (key.empty())
    {
        std::string randomKey = generateRandomKey(16);  // Generate a 16-character key
        key = randomKey;
        ui->keyInput->setPlainText(QString::fromStdString(key));  // Display the generated key to the user
    }

    processFile(inputFile, outputFile, key, true);

    // Save the key in the same directory as the encrypted file
    QFileInfo fileInfo(outputFile);
    QString keyFilePath = fileInfo.absolutePath() + "/key.txt";  // Save key.txt in the same directory as the output file
    std::ofstream keyFile(keyFilePath.toStdString());
    if (keyFile.is_open())
    {
        keyFile << key;  // Write the key to that file
        keyFile.close();
    }

    QMessageBox::information(this, "Success", "File encrypted successfully! Key has been saved in " + keyFilePath);
}

void MainWindow::onDecryptButtonClicked()
{
    QString inputFile = ui->inputFilePath->toPlainText();
    QString outputFile = ui->outputFilePath->toPlainText();
    QString keyInput = ui->keyInput->toPlainText();

    if (inputFile.isEmpty() || outputFile.isEmpty())
    {
        QMessageBox::warning(this, "Input Error", "Please fill in all the fields correctly.");
        return;
    }

    std::string key;

    // Check if the keyInput is a file path or a literal direct key
    QFileInfo keyInfo(keyInput);
    if (keyInfo.exists() && keyInfo.isFile())
    {
        // If the key input is a file, reads the key from that file
        std::ifstream keyFile(keyInput.toStdString());
        if (keyFile.is_open())
        {
            std::getline(keyFile, key);  // Reads the first line of the file as the key
            keyFile.close();
        }
        else
        {
            QMessageBox::warning(this, "Error", "Unable to open key file.");
            return;
        }
    }
    else
    {
        // Treats the keyInput as the actual key
        key = keyInput.toStdString();
    }

    processFile(inputFile, outputFile, key, false);

    QMessageBox::information(this, "Success", "File has decrypted successfully!");
}
