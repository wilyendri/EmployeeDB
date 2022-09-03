/********************************************************************************
** Form generated from reading UI file 'AdminMain.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINMAIN_H
#define UI_ADMINMAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdminMain
{
public:
    QLabel *label;
    QLabel *lblToDo;
    QPushButton *btnTask;
    QPushButton *btnQuit;

    void setupUi(QWidget *AdminMain)
    {
        if (AdminMain->objectName().isEmpty())
            AdminMain->setObjectName(QString::fromUtf8("AdminMain"));
        AdminMain->resize(520, 303);
        label = new QLabel(AdminMain);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 151, 51));
        QFont font;
        font.setFamily(QString::fromUtf8("Lucida Calligraphy"));
        font.setPointSize(9);
        label->setFont(font);
        lblToDo = new QLabel(AdminMain);
        lblToDo->setObjectName(QString::fromUtf8("lblToDo"));
        lblToDo->setGeometry(QRect(150, 60, 231, 71));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Microsoft Sans Serif"));
        font1.setPointSize(11);
        lblToDo->setFont(font1);
        btnTask = new QPushButton(AdminMain);
        btnTask->setObjectName(QString::fromUtf8("btnTask"));
        btnTask->setGeometry(QRect(100, 200, 93, 28));
        btnQuit = new QPushButton(AdminMain);
        btnQuit->setObjectName(QString::fromUtf8("btnQuit"));
        btnQuit->setGeometry(QRect(310, 200, 93, 28));

        retranslateUi(AdminMain);

        QMetaObject::connectSlotsByName(AdminMain);
    } // setupUi

    void retranslateUi(QWidget *AdminMain)
    {
        AdminMain->setWindowTitle(QCoreApplication::translate("AdminMain", "Form", nullptr));
        label->setText(QCoreApplication::translate("AdminMain", "Welcom Admin!", nullptr));
        lblToDo->setText(QCoreApplication::translate("AdminMain", "What would you like to do?", nullptr));
        btnTask->setText(QCoreApplication::translate("AdminMain", "Some Task", nullptr));
        btnQuit->setText(QCoreApplication::translate("AdminMain", "Quit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminMain: public Ui_AdminMain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINMAIN_H
