#include "today.h"
#include "ui_today.h"

today::today(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::today)
{
    ui->setupUi(this);
}

today::~today()
{
    delete ui;
}
