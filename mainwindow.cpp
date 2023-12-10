#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialog1.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_button_add_clicked()
{
    Dialog1 *dialog = new Dialog1(this);
    dialog -> show();

}


void MainWindow::on_button_qadd_clicked()
{
    QListWidgetItem* item = new QListWidgetItem(ui->lineEdit->text(), ui->listWidget);
    ui->listWidget->addItem(item);
    ui->lineEdit->clear();
}

void MainWindow::on_lineEdit_returnPressed()
{
    QString textToAdd = ui->lineEdit->text();

    // Add the text to the QListWidget
    QListWidgetItem* item = new QListWidgetItem(textToAdd, ui->listWidget);
    ui->listWidget->addItem(item);

    // Clear the text in the QLineEdit
    ui->lineEdit->clear();
}

