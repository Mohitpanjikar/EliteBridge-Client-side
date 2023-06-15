#ifndef RESTOCK_H
#define RESTOCK_H

#include <QDialog>

namespace Ui {
class Restock;
}

class Restock : public QDialog
{
    Q_OBJECT

public:
    explicit Restock(QWidget *parent = nullptr);
    ~Restock();

private slots:


private:
    Ui::Restock *ui;
};

#endif // RESTOCK_H
