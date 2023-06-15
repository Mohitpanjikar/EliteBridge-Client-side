#include "clientwindow.h"
#include "ui_clientwindow.h"
#include "withdraw.h"
#include "restock.h"
#include <QMessageBox>

ClientWindow::ClientWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ClientWindow)
{
    ui->setupUi(this);
}

ClientWindow::~ClientWindow()
{
    delete ui;
}

void ClientWindow::on_pushButton_2_clicked()
{
    Withdraw* newWithDrawWin=new Withdraw;
    newWithDrawWin->show();
}


void ClientWindow::on_pushButton_3_clicked()
{
    Restock* newrestcok=new Restock;
    newrestcok->show();
}


void ClientWindow::on_pushButton_4_clicked()
{
    QMessageBox::warning(this,"Warning","The user's access to this specific resource has not been granted by the administrator.");
}

