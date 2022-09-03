/********************************************************************************
** Form generated from reading UI file 'AdminWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINWINDOW_H
#define UI_ADMINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdminWindow
{
public:
    QLabel *label;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnCreateEmp;
    QPushButton *btnPromotr;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btnDeleteEmp;
    QPushButton *btnCreateLog;
    QPushButton *btnViewEmp;
    QPushButton *btnExit;

    void setupUi(QDialog *AdminWindow)
    {
        if (AdminWindow->objectName().isEmpty())
            AdminWindow->setObjectName(QString::fromUtf8("AdminWindow"));
        AdminWindow->resize(523, 423);
        label = new QLabel(AdminWindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(150, 0, 211, 61));
        QFont font;
        font.setFamily(QString::fromUtf8("MV Boli"));
        font.setPointSize(14);
        font.setUnderline(true);
        label->setFont(font);
        layoutWidget = new QWidget(AdminWindow);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 70, 431, 331));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btnCreateEmp = new QPushButton(layoutWidget);
        btnCreateEmp->setObjectName(QString::fromUtf8("btnCreateEmp"));

        horizontalLayout->addWidget(btnCreateEmp);

        btnPromotr = new QPushButton(layoutWidget);
        btnPromotr->setObjectName(QString::fromUtf8("btnPromotr"));

        horizontalLayout->addWidget(btnPromotr);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        btnDeleteEmp = new QPushButton(layoutWidget);
        btnDeleteEmp->setObjectName(QString::fromUtf8("btnDeleteEmp"));

        horizontalLayout_2->addWidget(btnDeleteEmp);

        btnCreateLog = new QPushButton(layoutWidget);
        btnCreateLog->setObjectName(QString::fromUtf8("btnCreateLog"));

        horizontalLayout_2->addWidget(btnCreateLog);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addLayout(verticalLayout);

        btnViewEmp = new QPushButton(layoutWidget);
        btnViewEmp->setObjectName(QString::fromUtf8("btnViewEmp"));

        verticalLayout_2->addWidget(btnViewEmp);


        verticalLayout_3->addLayout(verticalLayout_2);

        btnExit = new QPushButton(layoutWidget);
        btnExit->setObjectName(QString::fromUtf8("btnExit"));

        verticalLayout_3->addWidget(btnExit);


        retranslateUi(AdminWindow);

        QMetaObject::connectSlotsByName(AdminWindow);
    } // setupUi

    void retranslateUi(QDialog *AdminWindow)
    {
        AdminWindow->setWindowTitle(QCoreApplication::translate("AdminWindow", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("AdminWindow", "Welcome Admin!", nullptr));
        btnCreateEmp->setText(QCoreApplication::translate("AdminWindow", "Create Employee", nullptr));
        btnPromotr->setText(QCoreApplication::translate("AdminWindow", "Promote/Demote Employee", nullptr));
        btnDeleteEmp->setText(QCoreApplication::translate("AdminWindow", "Delete Employee", nullptr));
        btnCreateLog->setText(QCoreApplication::translate("AdminWindow", "Create Emp. Login", nullptr));
        btnViewEmp->setText(QCoreApplication::translate("AdminWindow", "View Emp. Info", nullptr));
        btnExit->setText(QCoreApplication::translate("AdminWindow", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminWindow: public Ui_AdminWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINWINDOW_H
