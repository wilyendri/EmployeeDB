/********************************************************************************
** Form generated from reading UI file 'DeleteEmployee.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETEEMPLOYEE_H
#define UI_DELETEEMPLOYEE_H

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

class Ui_DeleteEmployee
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEditEmpNum;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btnDelete;
    QPushButton *btnGoBack;

    void setupUi(QDialog *DeleteEmployee)
    {
        if (DeleteEmployee->objectName().isEmpty())
            DeleteEmployee->setObjectName(QString::fromUtf8("DeleteEmployee"));
        DeleteEmployee->resize(346, 143);
        widget = new QWidget(DeleteEmployee);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(60, 30, 231, 91));
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
        btnDelete = new QPushButton(widget);
        btnDelete->setObjectName(QString::fromUtf8("btnDelete"));

        horizontalLayout_2->addWidget(btnDelete);

        btnGoBack = new QPushButton(widget);
        btnGoBack->setObjectName(QString::fromUtf8("btnGoBack"));

        horizontalLayout_2->addWidget(btnGoBack);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(DeleteEmployee);

        QMetaObject::connectSlotsByName(DeleteEmployee);
    } // setupUi

    void retranslateUi(QDialog *DeleteEmployee)
    {
        DeleteEmployee->setWindowTitle(QCoreApplication::translate("DeleteEmployee", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("DeleteEmployee", "Emp#", nullptr));
        btnDelete->setText(QCoreApplication::translate("DeleteEmployee", "Delete", nullptr));
        btnGoBack->setText(QCoreApplication::translate("DeleteEmployee", "Go Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DeleteEmployee: public Ui_DeleteEmployee {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETEEMPLOYEE_H
