/********************************************************************************
** Form generated from reading UI file 'clientwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENTWINDOW_H
#define UI_CLIENTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ClientWindow
{
public:
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;

    void setupUi(QDialog *ClientWindow)
    {
        if (ClientWindow->objectName().isEmpty())
            ClientWindow->setObjectName("ClientWindow");
        ClientWindow->resize(671, 427);
        gridLayout = new QGridLayout(ClientWindow);
        gridLayout->setObjectName("gridLayout");
        label_2 = new QLabel(ClientWindow);
        label_2->setObjectName("label_2");
        label_2->setPixmap(QPixmap(QString::fromUtf8("../build-clientside_ui_file-Desktop_Qt_6_5_0_MinGW_64_bit-Debug/eliteBridge.png")));

        gridLayout->addWidget(label_2, 0, 0, 1, 2);

        label_3 = new QLabel(ClientWindow);
        label_3->setObjectName("label_3");
        label_3->setPixmap(QPixmap(QString::fromUtf8("../build-clientside_ui_file-Desktop_Qt_6_5_0_MinGW_64_bit-Debug/userimage.png")));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        label = new QLabel(ClientWindow);
        label->setObjectName("label");
        label->setPixmap(QPixmap(QString::fromUtf8("../build-clientside_ui_file-Desktop_Qt_6_5_0_MinGW_64_bit-Debug/elite_logo_-removebg-preview.png")));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        pushButton = new QPushButton(ClientWindow);
        pushButton->setObjectName("pushButton");

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(ClientWindow);
        pushButton_2->setObjectName("pushButton_2");

        verticalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(ClientWindow);
        pushButton_3->setObjectName("pushButton_3");

        verticalLayout->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(ClientWindow);
        pushButton_4->setObjectName("pushButton_4");

        verticalLayout->addWidget(pushButton_4);


        gridLayout->addLayout(verticalLayout, 1, 1, 1, 1);


        retranslateUi(ClientWindow);

        QMetaObject::connectSlotsByName(ClientWindow);
    } // setupUi

    void retranslateUi(QDialog *ClientWindow)
    {
        ClientWindow->setWindowTitle(QCoreApplication::translate("ClientWindow", "Dialog", nullptr));
        label_2->setText(QString());
        label_3->setText(QString());
        label->setText(QString());
        pushButton->setText(QCoreApplication::translate("ClientWindow", "EXIT", nullptr));
        pushButton_2->setText(QCoreApplication::translate("ClientWindow", "Withdraw", nullptr));
        pushButton_3->setText(QCoreApplication::translate("ClientWindow", "Restock", nullptr));
        pushButton_4->setText(QCoreApplication::translate("ClientWindow", "Capture FingerPrints", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ClientWindow: public Ui_ClientWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTWINDOW_H
