#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(&timer, SIGNAL(timeout()), this, SLOT(funct()));
    timer.start(1000);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::funct()
{
    amount--;
    ui->lcdNumber->display(amount);

    if (amount < 0) {
        close();
    }
}


void MainWindow::on_pushButton_clicked()
{
    amount++;
    ui->lcdNumber->display(amount);
}
