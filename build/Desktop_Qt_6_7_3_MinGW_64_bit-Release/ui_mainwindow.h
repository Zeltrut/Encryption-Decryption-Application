/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QPushButton *decryptButton;
    QPlainTextEdit *outputFilePath;
    QPlainTextEdit *inputFilePath;
    QTextEdit *textEdit_2;
    QLineEdit *blockSize;
    QPlainTextEdit *keyInput;
    QPushButton *generateKeyButton;
    QPushButton *encryptButton;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(635, 318);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        decryptButton = new QPushButton(centralwidget);
        decryptButton->setObjectName("decryptButton");

        gridLayout->addWidget(decryptButton, 8, 2, 1, 1);

        outputFilePath = new QPlainTextEdit(centralwidget);
        outputFilePath->setObjectName("outputFilePath");

        gridLayout->addWidget(outputFilePath, 9, 0, 1, 3);

        inputFilePath = new QPlainTextEdit(centralwidget);
        inputFilePath->setObjectName("inputFilePath");
        inputFilePath->setBackgroundVisible(false);

        gridLayout->addWidget(inputFilePath, 4, 0, 1, 3);

        textEdit_2 = new QTextEdit(centralwidget);
        textEdit_2->setObjectName("textEdit_2");
        textEdit_2->setReadOnly(true);

        gridLayout->addWidget(textEdit_2, 3, 0, 1, 3);

        blockSize = new QLineEdit(centralwidget);
        blockSize->setObjectName("blockSize");
        blockSize->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        blockSize->setAutoFillBackground(false);
        blockSize->setClearButtonEnabled(false);

        gridLayout->addWidget(blockSize, 7, 1, 1, 1);

        keyInput = new QPlainTextEdit(centralwidget);
        keyInput->setObjectName("keyInput");
        keyInput->setCenterOnScroll(false);

        gridLayout->addWidget(keyInput, 6, 0, 1, 2);

        generateKeyButton = new QPushButton(centralwidget);
        generateKeyButton->setObjectName("generateKeyButton");

        gridLayout->addWidget(generateKeyButton, 6, 2, 1, 1);

        encryptButton = new QPushButton(centralwidget);
        encryptButton->setObjectName("encryptButton");

        gridLayout->addWidget(encryptButton, 8, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        outputFilePath->raise();
        blockSize->raise();
        textEdit_2->raise();
        encryptButton->raise();
        decryptButton->raise();
        inputFilePath->raise();
        keyInput->raise();
        generateKeyButton->raise();
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        decryptButton->setText(QCoreApplication::translate("MainWindow", "Decrypt", nullptr));
        outputFilePath->setPlainText(QString());
        outputFilePath->setPlaceholderText(QCoreApplication::translate("MainWindow", "Output File Path here (EX. D:\\Coding\\EncryptionDecryption Algorithm\\name_of_file.txt)", nullptr));
        inputFilePath->setPlainText(QString());
        inputFilePath->setPlaceholderText(QCoreApplication::translate("MainWindow", "Input File Path here (can drag and drop but must delete the initial \"file\\\\\\\")", nullptr));
        textEdit_2->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt;\">Drag and Drop the file! (or input the path)</span></p></body></html>", nullptr));
        blockSize->setText(QString());
        blockSize->setPlaceholderText(QCoreApplication::translate("MainWindow", "Block Size Here! (in 4s)", nullptr));
        keyInput->setPlaceholderText(QCoreApplication::translate("MainWindow", "Key Goes Here! (if provided)", nullptr));
        generateKeyButton->setText(QCoreApplication::translate("MainWindow", "Generate Key", nullptr));
        encryptButton->setText(QCoreApplication::translate("MainWindow", "Encrypt", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
