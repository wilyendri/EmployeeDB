/********************************************************************************
** Form generated from reading UI file 'CreateLogin.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATELOGIN_H
#define UI_CREATELOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CreateLogin
{
public:
    QLabel *label_4;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEditEmpNum;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEditUsername;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEditPassw;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *btnSumbit;
    QPushButton *btnHome;

    void setupUi(QDialog *CreateLogin)
    {
        if (CreateLogin->objectName().isEmpty())
            CreateLogin->setObjectName(QString::fromUtf8("CreateLogin"));
        CreateLogin->resize(480, 387);
        label_4 = new QLabel(CreateLogin);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(40, 0, 421, 61));
        widget = new QWidget(CreateLogin);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(110, 70, 241, 231));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEditEmpNum = new QLineEdit(widget);
        lineEditEmpNum->setObjectName(QString::fromUtf8("lineEditEmpNum"));

        horizontalLayout->addWidget(lineEditEmpNum);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEditUsername = new QLineEdit(widget);
        lineEditUsername->setObjectName(QString::fromUtf8("lineEditUsername"));

        horizontalLayout_2->addWidget(lineEditUsername);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        lineEditPassw = new QLineEdit(widget);
        lineEditPassw->setObjectName(QString::fromUtf8("lineEditPassw"));

        horizontalLayout_3->addWidget(lineEditPassw);


        verticalLayout->addLayout(horizontalLayout_3);

        widget1 = new QWidget(CreateLogin);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(110, 310, 241, 61));
        horizontalLayout_4 = new QHBoxLayout(widget1);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        btnSumbit = new QPushButton(widget1);
        btnSumbit->setObjectName(QString::fromUtf8("btnSumbit"));

        horizontalLayout_4->addWidget(btnSumbit);

        btnHome = new QPushButton(widget1);
        btnHome->setObjectName(QString::fromUtf8("btnHome"));

        horizontalLayout_4->addWidget(btnHome);


        retranslateUi(CreateLogin);

        QMetaObject::connectSlotsByName(CreateLogin);
    } // setupUi

    void retranslateUi(QDialog *CreateLogin)
    {
        CreateLogin->setWindowTitle(QCoreApplication::translate("CreateLogin", "Dialog", nullptr));
        label_4->setText(QCoreApplication::translate("CreateLogin", "   Provide the employee number to set Username and Password", nullptr));
        label->setText(QCoreApplication::translate("CreateLogin", "Emp#", nullptr));
        label_2->setText(QCoreApplication::translate("CreateLogin", "Username", nullptr));
        label_3->setText(QCoreApplication::translate("CreateLogin", "Password", nullptr));
        btnSumbit->setText(QCoreApplication::translate("CreateLogin", "Submit", nullptr));
        btnHome->setText(QCoreApplication::translate("CreateLogin", "Home", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreateLogin: public Ui_CreateLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATELOGIN_H
