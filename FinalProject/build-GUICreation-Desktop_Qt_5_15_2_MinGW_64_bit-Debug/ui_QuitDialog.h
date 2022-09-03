/********************************************************************************
** Form generated from reading UI file 'QuitDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUITDIALOG_H
#define UI_QUITDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_QuitDialog
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnYes;
    QPushButton *btnNo;

    void setupUi(QDialog *QuitDialog)
    {
        if (QuitDialog->objectName().isEmpty())
            QuitDialog->setObjectName(QString::fromUtf8("QuitDialog"));
        QuitDialog->resize(335, 188);
        gridLayout = new QGridLayout(QuitDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(QuitDialog);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("Rockwell Condensed"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btnYes = new QPushButton(QuitDialog);
        btnYes->setObjectName(QString::fromUtf8("btnYes"));

        horizontalLayout->addWidget(btnYes);

        btnNo = new QPushButton(QuitDialog);
        btnNo->setObjectName(QString::fromUtf8("btnNo"));

        horizontalLayout->addWidget(btnNo);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(QuitDialog);

        QMetaObject::connectSlotsByName(QuitDialog);
    } // setupUi

    void retranslateUi(QDialog *QuitDialog)
    {
        QuitDialog->setWindowTitle(QCoreApplication::translate("QuitDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("QuitDialog", "Are you sure you want to exit the program?", nullptr));
        btnYes->setText(QCoreApplication::translate("QuitDialog", "Yes", nullptr));
        btnNo->setText(QCoreApplication::translate("QuitDialog", "No", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QuitDialog: public Ui_QuitDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUITDIALOG_H
