/********************************************************************************
** Form generated from reading UI file 'ViewEmployees.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWEMPLOYEES_H
#define UI_VIEWEMPLOYEES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_ViewEmployees
{
public:
    QTextBrowser *textBrowser;
    QPushButton *btnView;
    QPushButton *btnView_2;

    void setupUi(QDialog *ViewEmployees)
    {
        if (ViewEmployees->objectName().isEmpty())
            ViewEmployees->setObjectName(QString::fromUtf8("ViewEmployees"));
        ViewEmployees->resize(524, 439);
        textBrowser = new QTextBrowser(ViewEmployees);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(20, 110, 481, 301));
        btnView = new QPushButton(ViewEmployees);
        btnView->setObjectName(QString::fromUtf8("btnView"));
        btnView->setGeometry(QRect(60, 50, 111, 31));
        btnView_2 = new QPushButton(ViewEmployees);
        btnView_2->setObjectName(QString::fromUtf8("btnView_2"));
        btnView_2->setGeometry(QRect(320, 50, 111, 31));

        retranslateUi(ViewEmployees);

        QMetaObject::connectSlotsByName(ViewEmployees);
    } // setupUi

    void retranslateUi(QDialog *ViewEmployees)
    {
        ViewEmployees->setWindowTitle(QCoreApplication::translate("ViewEmployees", "Dialog", nullptr));
        btnView->setText(QCoreApplication::translate("ViewEmployees", "View", nullptr));
        btnView_2->setText(QCoreApplication::translate("ViewEmployees", "Home", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ViewEmployees: public Ui_ViewEmployees {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWEMPLOYEES_H
