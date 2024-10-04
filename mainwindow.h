#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void onEncryptButtonClicked();  // Slot to encrypt button
    void onDecryptButtonClicked();  // Slot to decrypt button
    void onGenerateKeyButtonClicked(); // Slot to generate a key

private:
    Ui::MainWindow *ui;

    std::string generateRandomKey(size_t length);  // function that is able to generate a random key
    // Encryption and Decryption functions
    std::string block_encrypt(const std::string &data, const std::string &key);
    std::string block_decrypt(const std::string &data, const std::string &key);

    // File processor due to text more than 32 characters having a weird drawback of shutting down the encrypter
    void processFile(const QString &inputFile, const QString &outputFile, const std::string &key, bool encrypt);

};

#endif // MAINWINDOW_H
