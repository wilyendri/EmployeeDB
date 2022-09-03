/********************************************************************************
** Form generated from reading UI file 'CustomerMain.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMERMAIN_H
#define UI_CUSTOMERMAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CustomerMain
{
public:
    QLabel *lblWelcomeCust;
    QPushButton *btnSomeTask;
    QPushButton *btnQuit;
    QLabel *lblToDo;

    void setupUi(QWidget *CustomerMain)
    {
        if (CustomerMain->objectName().isEmpty())
            CustomerMain->setObjectName(QString::fromUtf8("CustomerMain"));
        CustomerMain->resize(519, 305);
        lblWelcomeCust = new QLabel(CustomerMain);
        lblWelcomeCust->setObjectName(QString::fromUtf8("lblWelcomeCust"));
        lblWelcomeCust->setGeometry(QRect(10, 10, 231, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("Lucida Handwriting"));
        font.setPointSize(9);
        lblWelcomeCust->setFont(font);
        btnSomeTask = new QPushButton(CustomerMain);
        btnSomeTask->setObjectName(QString::fromUtf8("btnSomeTask"));
        btnSomeTask->setGeometry(QRect(100, 200, 93, 28));
        btnQuit = new QPushButton(CustomerMain);
        btnQuit->setObjectName(QString::fromUtf8("btnQuit"));
        btnQuit->setGeometry(QRect(300, 200, 93, 28));
        lblToDo = new QLabel(CustomerMain);
        lblToDo->setObjectName(QString::fromUtf8("lblToDo"));
        lblToDo->setGeometry(QRect(120, 70, 231, 71));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Microsoft Sans Serif"));
        font1.setPointSize(11);
        lblToDo->setFont(font1);

        retranslateUi(CustomerMain);

        QMetaObject::connectSlotsByName(CustomerMain);
    } // setupUi

    void retranslateUi(QWidget *CustomerMain)
    {
        CustomerMain->setWindowTitle(QCoreApplication::translate("CustomerMain", "Form", nullptr));
        lblWelcomeCust->setText(QCoreApplication::translate("CustomerMain", "Welcome CustomerName!", nullptr));
        btnSomeTask->setText(QCoreApplication::translate("CustomerMain", "Some Task", nullptr));
        btnQuit->setText(QCoreApplication::translate("CustomerMain", "Quit", nullptr));
        lblToDo->setText(QCoreApplication::translate("CustomerMain", "What would you like to do?", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CustomerMain: public Ui_CustomerMain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMERMAIN_H
