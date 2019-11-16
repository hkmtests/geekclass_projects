#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->pic->setPixmap(QPixmap(":/1.jpg"));
    connect(&timer, SIGNAL(timeout()), this, SLOT(funct()));
    timer.start(1000);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::funct()
{
    hp--;
    happiness--;
    hunger--;

    if (hp >= 6 || happiness >= 6 || hunger >= 6) {
        ui->pic->setPixmap(QPixmap(":/1.jpg"));
    }

    if (hp < 6 || happiness < 6 || hunger < 6) {
        ui->pic->setPixmap(QPixmap(":/2.jpg"));
    }

    if (hp < 3 || happiness < 3 || hunger < 3) {
        ui->pic->setPixmap(QPixmap(":/3.jpg"));
    }

    ui->lcdNumber_HP->display(hp);
    ui->lcdNumber_Happiness->display(happiness);
    ui->lcdNumber_Hunger->display(hunger);

    if (hp < 0 || happiness < 0 || hunger < 0) {
        close();
    }
}


void MainWindow::on_pushButton_HP_clicked()
{
    hp++;
    ui->lcdNumber_HP->display(hp);
}

void MainWindow::on_pushButton_Happiness_clicked()
{
    happiness++;
    ui->lcdNumber_Happiness->display(happiness);
}

void MainWindow::on_pushButton_Hunger_clicked()
{
    hunger++;
    ui->lcdNumber_Hunger->display(hunger);
}
