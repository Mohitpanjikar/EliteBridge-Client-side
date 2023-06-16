/********************************************************************************
** Form generated from reading UI file 'withdraw.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WITHDRAW_H
#define UI_WITHDRAW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Withdraw
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *label_5;
    QLabel *label_6;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *Withdraw)
    {
        if (Withdraw->objectName().isEmpty())
            Withdraw->setObjectName("Withdraw");
        Withdraw->resize(690, 386);
        Withdraw->setStyleSheet(QString::fromUtf8("background-color:white;"));
        verticalLayout = new QVBoxLayout(Withdraw);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(Withdraw);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        label_2 = new QLabel(Withdraw);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        lineEdit = new QLineEdit(Withdraw);
        lineEdit->setObjectName("lineEdit");

        gridLayout->addWidget(lineEdit, 0, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_4 = new QLabel(Withdraw);
        label_4->setObjectName("label_4");
        label_4->setPixmap(QPixmap(QString::fromUtf8("../build-clientside_ui_file-Desktop_Qt_6_5_0_MinGW_64_bit-Debug/delete.png")));

        horizontalLayout->addWidget(label_4);

        label_3 = new QLabel(Withdraw);
        label_3->setObjectName("label_3");
        label_3->setPixmap(QPixmap(QString::fromUtf8("../build-clientside_ui_file-Desktop_Qt_6_5_0_MinGW_64_bit-Debug/search.png")));

        horizontalLayout->addWidget(label_3);

        label_5 = new QLabel(Withdraw);
        label_5->setObjectName("label_5");
        label_5->setPixmap(QPixmap(QString::fromUtf8("../build-clientside_ui_file-Desktop_Qt_6_5_0_MinGW_64_bit-Debug/power_search.png")));

        horizontalLayout->addWidget(label_5);

        label_6 = new QLabel(Withdraw);
        label_6->setObjectName("label_6");
        label_6->setPixmap(QPixmap(QString::fromUtf8("../build-clientside_ui_file-Desktop_Qt_6_5_0_MinGW_64_bit-Debug/exit.png")));

        horizontalLayout->addWidget(label_6);


        gridLayout->addLayout(horizontalLayout, 0, 2, 1, 1);


        verticalLayout->addLayout(gridLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(Withdraw);

        QMetaObject::connectSlotsByName(Withdraw);
    } // setupUi

    void retranslateUi(QDialog *Withdraw)
    {
        Withdraw->setWindowTitle(QCoreApplication::translate("Withdraw", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Withdraw", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">Specify Item</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("Withdraw", "<html><head/><body><p><span style=\" font-size:12pt;\">Item</span></p></body></html>", nullptr));
        label_4->setText(QString());
        label_3->setText(QString());
        label_5->setText(QString());
        label_6->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Withdraw: public Ui_Withdraw {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WITHDRAW_H
