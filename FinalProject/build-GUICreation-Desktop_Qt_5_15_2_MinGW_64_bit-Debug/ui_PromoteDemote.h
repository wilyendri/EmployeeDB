/********************************************************************************
** Form generated from reading UI file 'PromoteDemote.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROMOTEDEMOTE_H
#define UI_PROMOTEDEMOTE_H

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

class Ui_PromoteDemote
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_2;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEditEmpNum;
    QLineEdit *lineEditPosition;
    QLineEdit *lineEditSalary;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnSubmit;
    QPushButton *btnHome;

    void setupUi(QDialog *PromoteDemote)
    {
        if (PromoteDemote->objectName().isEmpty())
            PromoteDemote->setObjectName(QString::fromUtf8("PromoteDemote"));
        PromoteDemote->resize(299, 282);
        widget = new QWidget(PromoteDemote);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 20, 254, 241));
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_2->addWidget(label);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_2->addWidget(label_3);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_2->addWidget(label_2);


        horizontalLayout_2->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lineEditEmpNum = new QLineEdit(widget);
        lineEditEmpNum->setObjectName(QString::fromUtf8("lineEditEmpNum"));

        verticalLayout->addWidget(lineEditEmpNum);

        lineEditPosition = new QLineEdit(widget);
        lineEditPosition->setObjectName(QString::fromUtf8("lineEditPosition"));

        verticalLayout->addWidget(lineEditPosition);

        lineEditSalary = new QLineEdit(widget);
        lineEditSalary->setObjectName(QString::fromUtf8("lineEditSalary"));

        verticalLayout->addWidget(lineEditSalary);


        horizontalLayout_2->addLayout(verticalLayout);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btnSubmit = new QPushButton(widget);
        btnSubmit->setObjectName(QString::fromUtf8("btnSubmit"));

        horizontalLayout->addWidget(btnSubmit);

        btnHome = new QPushButton(widget);
        btnHome->setObjectName(QString::fromUtf8("btnHome"));

        horizontalLayout->addWidget(btnHome);


        verticalLayout_3->addLayout(horizontalLayout);


        retranslateUi(PromoteDemote);

        QMetaObject::connectSlotsByName(PromoteDemote);
    } // setupUi

    void retranslateUi(QDialog *PromoteDemote)
    {
        PromoteDemote->setWindowTitle(QCoreApplication::translate("PromoteDemote", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("PromoteDemote", "Emp#", nullptr));
        label_3->setText(QCoreApplication::translate("PromoteDemote", "Position", nullptr));
        label_2->setText(QCoreApplication::translate("PromoteDemote", "Salary", nullptr));
        btnSubmit->setText(QCoreApplication::translate("PromoteDemote", "Submit", nullptr));
        btnHome->setText(QCoreApplication::translate("PromoteDemote", "Home", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PromoteDemote: public Ui_PromoteDemote {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROMOTEDEMOTE_H
