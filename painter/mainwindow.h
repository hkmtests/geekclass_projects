#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPainter>
#include <QTimer>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void paintEvent(QPaintEvent *e);

private:
    Ui::MainWindow *ui;
    bool whatType = 0;
    QTimer timer;
    int r = 0;
    int g = 0;
    int b = 0;
    int plusR = rand() % 15 + 1;
    int plusG = rand() % 15 + 1;
    int plusB = rand() % 15 + 1;
    bool staticR = 0;
    bool staticG = 0;
    bool staticB = 0;
};

#endif // MAINWINDOW_H
