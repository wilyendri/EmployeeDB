/********************************************************************************
** Form generated from reading UI file 'CreateEmp.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEEMP_H
#define UI_CREATEEMP_H

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

class Ui_CreateEmp
{
public:
    QLabel *label_7;
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_7;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEditFirstName;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEditLastName;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEditPosition;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QLineEdit *lineEditSalary;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QLineEdit *lineEditDate;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QLineEdit *lineEditEmpNum;
    QPushButton *btnSubmit;
    QPushButton *btnHome;

    void setupUi(QDialog *CreateEmp)
    {
        if (CreateEmp->objectName().isEmpty())
            CreateEmp->setObjectName(QString::fromUtf8("CreateEmp"));
        CreateEmp->resize(619, 484);
        label_7 = new QLabel(CreateEmp);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(180, 0, 311, 71));
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        label_7->setFont(font);
        widget = new QWidget(CreateEmp);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(40, 90, 541, 381));
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEditFirstName = new QLineEdit(widget);
        lineEditFirstName->setObjectName(QString::fromUtf8("lineEditFirstName"));

        horizontalLayout->addWidget(lineEditFirstName);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEditLastName = new QLineEdit(widget);
        lineEditLastName->setObjectName(QString::fromUtf8("lineEditLastName"));

        horizontalLayout_2->addWidget(lineEditLastName);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        lineEditPosition = new QLineEdit(widget);
        lineEditPosition->setObjectName(QString::fromUtf8("lineEditPosition"));

        horizontalLayout_3->addWidget(lineEditPosition);


        verticalLayout->addLayout(horizontalLayout_3);


        horizontalLayout_7->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_4->addWidget(label_5);

        lineEditSalary = new QLineEdit(widget);
        lineEditSalary->setObjectName(QString::fromUtf8("lineEditSalary"));

        horizontalLayout_4->addWidget(lineEditSalary);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_5->addWidget(label_4);

        lineEditDate = new QLineEdit(widget);
        lineEditDate->setObjectName(QString::fromUtf8("lineEditDate"));

        horizontalLayout_5->addWidget(lineEditDate);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_6 = new QLabel(widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_6->addWidget(label_6);

        lineEditEmpNum = new QLineEdit(widget);
        lineEditEmpNum->setObjectName(QString::fromUtf8("lineEditEmpNum"));

        horizontalLayout_6->addWidget(lineEditEmpNum);


        verticalLayout_2->addLayout(horizontalLayout_6);


        horizontalLayout_7->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout_7);

        btnSubmit = new QPushButton(widget);
        btnSubmit->setObjectName(QString::fromUtf8("btnSubmit"));

        verticalLayout_3->addWidget(btnSubmit);

        btnHome = new QPushButton(widget);
        btnHome->setObjectName(QString::fromUtf8("btnHome"));

        verticalLayout_3->addWidget(btnHome);


        retranslateUi(CreateEmp);

        QMetaObject::connectSlotsByName(CreateEmp);
    } // setupUi

    void retranslateUi(QDialog *CreateEmp)
    {
        CreateEmp->setWindowTitle(QCoreApplication::translate("CreateEmp", "Dialog", nullptr));
        label_7->setText(QCoreApplication::translate("CreateEmp", "Provide Employee Infrormation", nullptr));
        label->setText(QCoreApplication::translate("CreateEmp", "First Name", nullptr));
        label_2->setText(QCoreApplication::translate("CreateEmp", "Last Name", nullptr));
        label_3->setText(QCoreApplication::translate("CreateEmp", "Position", nullptr));
        label_5->setText(QCoreApplication::translate("CreateEmp", "Salary", nullptr));
        label_4->setText(QCoreApplication::translate("CreateEmp", "Hire Date", nullptr));
        label_6->setText(QCoreApplication::translate("CreateEmp", "Emp#", nullptr));
        btnSubmit->setText(QCoreApplication::translate("CreateEmp", "Submit", nullptr));
        btnHome->setText(QCoreApplication::translate("CreateEmp", "Home", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreateEmp: public Ui_CreateEmp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEEMP_H
