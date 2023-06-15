#include "restock.h"
#include "ui_restock.h"

Restock::Restock(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Restock)
{
    ui->setupUi(this);
}

Restock::~Restock()
{
    delete ui;
}
