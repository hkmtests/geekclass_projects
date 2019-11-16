#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include <QPixmap>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    int hp = 10;
    int happiness = 10;
    int hunger = 10;
    QTimer timer;

protected slots:
    void funct();
private slots:
    void on_pushButton_HP_clicked();
    void on_pushButton_Happiness_clicked();
    void on_pushButton_Hunger_clicked();
};

#endif // MAINWINDOW_H
