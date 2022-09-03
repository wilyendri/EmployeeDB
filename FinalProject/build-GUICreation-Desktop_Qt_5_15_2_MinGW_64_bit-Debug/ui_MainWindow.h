/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QLabel *lblType;
    QPushButton *btnLogin;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *lblUsername;
    QLineEdit *lineEditUsername;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lblPssw;
    QLineEdit *lineEditPassword;
    QLabel *lblPic;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(847, 341);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(330, 0, 521, 341));
        lblType = new QLabel(groupBox);
        lblType->setObjectName(QString::fromUtf8("lblType"));
        lblType->setGeometry(QRect(30, 20, 501, 81));
        QFont font;
        font.setFamily(QString::fromUtf8("Mongolian Baiti"));
        font.setPointSize(10);
        lblType->setFont(font);
        btnLogin = new QPushButton(groupBox);
        btnLogin->setObjectName(QString::fromUtf8("btnLogin"));
        btnLogin->setGeometry(QRect(190, 280, 171, 41));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(170, 120, 211, 121));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lblUsername = new QLabel(layoutWidget);
        lblUsername->setObjectName(QString::fromUtf8("lblUsername"));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(false);
        font1.setWeight(50);
        lblUsername->setFont(font1);

        horizontalLayout->addWidget(lblUsername);

        lineEditUsername = new QLineEdit(layoutWidget);
        lineEditUsername->setObjectName(QString::fromUtf8("lineEditUsername"));

        horizontalLayout->addWidget(lineEditUsername, 0, Qt::AlignHCenter|Qt::AlignVCenter);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        lblPssw = new QLabel(layoutWidget);
        lblPssw->setObjectName(QString::fromUtf8("lblPssw"));
        QFont font2;
        font2.setPointSize(10);
        lblPssw->setFont(font2);

        horizontalLayout_2->addWidget(lblPssw);

        lineEditPassword = new QLineEdit(layoutWidget);
        lineEditPassword->setObjectName(QString::fromUtf8("lineEditPassword"));
        lineEditPassword->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(lineEditPassword, 0, Qt::AlignHCenter|Qt::AlignVCenter);


        verticalLayout->addLayout(horizontalLayout_2);

        lblPic = new QLabel(centralwidget);
        lblPic->setObjectName(QString::fromUtf8("lblPic"));
        lblPic->setGeometry(QRect(0, 40, 331, 241));
        lblPic->setPixmap(QPixmap(QString::fromUtf8("../build-GUICreation-Desktop_Qt_5_15_2_MinGW_64_bit-Debug/Login2.jpg")));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Welcome!", nullptr));
        lblType->setText(QCoreApplication::translate("MainWindow", "Please, type your username and password to sign in into the system.", nullptr));
        btnLogin->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        lblUsername->setText(QCoreApplication::translate("MainWindow", "Username", nullptr));
        lblPssw->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        lblPic->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
