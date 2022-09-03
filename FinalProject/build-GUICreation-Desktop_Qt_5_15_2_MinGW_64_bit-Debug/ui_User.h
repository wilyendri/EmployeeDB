/********************************************************************************
** Form generated from reading UI file 'User.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USER_H
#define UI_USER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_User
{
public:
    QLabel *lblUser;
    QLabel *label_2;
    QTextBrowser *textDate;
    QLabel *label_3;
    QTextBrowser *textSalary;
    QLabel *label_4;
    QTextBrowser *textPosition;
    QLabel *label;
    QTextBrowser *textNumber;
    QPushButton *btnClose;

    void setupUi(QDialog *User)
    {
        if (User->objectName().isEmpty())
            User->setObjectName(QString::fromUtf8("User"));
        User->resize(468, 302);
        lblUser = new QLabel(User);
        lblUser->setObjectName(QString::fromUtf8("lblUser"));
        lblUser->setGeometry(QRect(60, 10, 211, 61));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        lblUser->setFont(font);
        label_2 = new QLabel(User);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 80, 201, 31));
        textDate = new QTextBrowser(User);
        textDate->setObjectName(QString::fromUtf8("textDate"));
        textDate->setGeometry(QRect(20, 110, 191, 31));
        label_3 = new QLabel(User);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 160, 101, 16));
        textSalary = new QTextBrowser(User);
        textSalary->setObjectName(QString::fromUtf8("textSalary"));
        textSalary->setGeometry(QRect(20, 180, 191, 31));
        label_4 = new QLabel(User);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(240, 150, 171, 31));
        textPosition = new QTextBrowser(User);
        textPosition->setObjectName(QString::fromUtf8("textPosition"));
        textPosition->setGeometry(QRect(240, 180, 191, 31));
        label = new QLabel(User);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(250, 90, 131, 21));
        textNumber = new QTextBrowser(User);
        textNumber->setObjectName(QString::fromUtf8("textNumber"));
        textNumber->setGeometry(QRect(240, 110, 191, 31));
        btnClose = new QPushButton(User);
        btnClose->setObjectName(QString::fromUtf8("btnClose"));
        btnClose->setGeometry(QRect(170, 240, 93, 28));

        retranslateUi(User);

        QMetaObject::connectSlotsByName(User);
    } // setupUi

    void retranslateUi(QDialog *User)
    {
        User->setWindowTitle(QCoreApplication::translate("User", "Dialog", nullptr));
        lblUser->setText(QCoreApplication::translate("User", "Hello Username", nullptr));
        label_2->setText(QCoreApplication::translate("User", "You have been employee since:", nullptr));
        label_3->setText(QCoreApplication::translate("User", "Your salary is:", nullptr));
        label_4->setText(QCoreApplication::translate("User", "You current position is:", nullptr));
        label->setText(QCoreApplication::translate("User", "Employee Number:", nullptr));
        btnClose->setText(QCoreApplication::translate("User", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class User: public Ui_User {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_H
