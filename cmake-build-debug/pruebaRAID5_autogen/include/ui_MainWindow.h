/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QLabel *fileNameL;
    QPlainTextEdit *nameEdit;
    QLabel *label_2;
    QPlainTextEdit *contentEdit;
    QPushButton *SaveBtn;

    void setupUi(QWidget *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(574, 427);
        fileNameL = new QLabel(MainWindow);
        fileNameL->setObjectName(QString::fromUtf8("fileNameL"));
        fileNameL->setGeometry(QRect(250, 20, 67, 17));
        nameEdit = new QPlainTextEdit(MainWindow);
        nameEdit->setObjectName(QString::fromUtf8("nameEdit"));
        nameEdit->setGeometry(QRect(210, 40, 141, 31));
        label_2 = new QLabel(MainWindow);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(250, 130, 61, 17));
        contentEdit = new QPlainTextEdit(MainWindow);
        contentEdit->setObjectName(QString::fromUtf8("contentEdit"));
        contentEdit->setGeometry(QRect(30, 160, 511, 211));
        SaveBtn = new QPushButton(MainWindow);
        SaveBtn->setObjectName(QString::fromUtf8("SaveBtn"));
        SaveBtn->setGeometry(QRect(240, 390, 89, 25));

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QWidget *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        fileNameL->setText(QApplication::translate("MainWindow", "File Name", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Content", nullptr));
        SaveBtn->setText(QApplication::translate("MainWindow", "Save", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
