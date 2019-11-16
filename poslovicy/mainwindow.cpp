#include "mainwindow.h"
#include "ui_mainwindow.h"

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


void MainWindow::on_pushButton_clicked()
{
    int random = rand() % 5;
    QString mas[5];
    mas[0] = "Не плюй в колодец, пригодится воды напиться";
    mas[1] = "Без труда не выловишь и рыбку из пруда";
    mas[2] = "Не беречь поросли, не видать и дерева.";
    mas[3] = "Дважды в год лето не бывает.";
    mas[4] = "Летом не припасешь, зимой не принесешь.";
    ui->label->setText(mas[random]);
}
