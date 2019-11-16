#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(&timer, SIGNAL(timeout()), this, SLOT(repaint()));
    timer.start(20);

    plusR = 3;
    plusG = 2;
    plusB = 1;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::paintEvent(QPaintEvent *e)
{


   QPainter painter(this);
   r += plusR;
   g += plusG;
   b += plusB;

   if (r > 255)
   {
       r = 255;
       plusR *= -1;
   }

   if (g > 255)
   {
       g = 255;
       plusG *= -1;
   }

   if (b > 255)
   {
       b = 255;
       plusB *= -1;
   }

   if (r < 0)
   {
       r = 0;
       plusR *= -1;
   }

   if (g < 0)
   {
       g = 0;
       plusG *= -1;
   }

   if (b < 0)
   {
       b = 0;
       plusB *= -1;
   }

   painter.setBrush(QBrush(QColor::fromRgb(r, g, b)));
   painter.drawRect(1, 1, 10000, 10000);
}
