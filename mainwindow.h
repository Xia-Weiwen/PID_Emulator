#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDesktopWidget>
#include <cmath>

#include "pidthread.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_btnSetPos_clicked();

    void on_btnSetPID_clicked();

    void on_btnQuit_clicked();

    void on_sldPosition_valueChanged(int value);

    void updateChart(int newPos);

private:
    Ui::MainWindow *ui;
    PIDThread* pid;

private:
    void initGUI();
    void DrawPosChart(int newPos);
};

#endif // MAINWINDOW_H
