#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    initGUI();
    pid = new PIDThread;
    connect(ui->sldPosition, SIGNAL(valueChanged(int)), pid, SLOT(setCurrentPosition(int)));
    connect(pid, SIGNAL(updatePosition(int)), ui->sldPosition, SLOT(setValue(int)));
    connect(pid, SIGNAL(updatePosition(int)), this, SLOT(updateChart(int)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::initGUI()
{
    // set title
    setWindowTitle("Simple PID Emulator");
    // move window to center
    move((QApplication::desktop()->width() - width()) / 2,
         (QApplication::desktop()->height() - height()) / 2);
    // input constraints
    ui->editPos->setValidator(new QIntValidator(this));
    ui->editP->setValidator(new QDoubleValidator(this));
    ui->editI->setValidator(new QDoubleValidator(this));
    ui->editD->setValidator(new QDoubleValidator(this));
    // connections
    connect(ui->action_Quit, SIGNAL(triggered()), qApp, SLOT(quit()));
    connect(ui->actionAbout_Qt, SIGNAL(triggered()), qApp, SLOT(aboutQt()));
}

void MainWindow::on_btnSetPos_clicked()
{
    ui->lblCurTarget->setText(ui->editPos->text());
    ui->lblWarning->setText("");
    if (ui->lblCurTarget->text().isEmpty())
    {
        ui->lblWarning->setText("<font color=\"red\">Warning: Empty position target!</font>");
        return;
    }
    if (ui->lblPosCurP->text().isEmpty()
            || ui->lblPosCurI->text().isEmpty()
            || ui->lblPosCurD->text().isEmpty())
    {
        ui->lblWarning->setText("<font color=\"red\">Warning: Empty PID parameter(s)!</font>");
        return;
    }
    if (abs(ui->lblCurTarget->text().toInt()) > 1000)
    {
        ui->lblWarning->setText("<font color=\"red\">Warning: Position out of range!</font>");
        return;
    }
    pid->clearData();
    pid->setTargetPosition(ui->lblCurTarget->text().toInt());
    ui->widPosChart->clearRecord();
//    ui->sldPosition->setValue(ui->lblCurTarget->text().toInt());
    pid->start();
}

void MainWindow::on_btnSetPID_clicked()
{
    ui->lblPosCurP->setText(ui->editP->text());
    ui->lblPosCurI->setText(ui->editI->text());
    ui->lblPosCurD->setText(ui->editD->text());
    pid->setPIDParameters(ui->lblPosCurP->text().toDouble(),
                          ui->lblPosCurI->text().toDouble(),
                          ui->lblPosCurD->text().toDouble());
}

void MainWindow::on_btnQuit_clicked()
{
    qApp->quit();
}

void MainWindow::on_sldPosition_valueChanged(int value)
{
    ui->lblOrigin->setText(QString::number(value / 10.0, 'f', 1));
}

void MainWindow::DrawPosChart(int newPos)
{
    int position =  -newPos / 10000.0 * ui->widPosChart->height() / 2
                 + ui->widPosChart->height() / 2;
//    qDebug("pos: %d, %d", position, newPos);
    ui->widPosChart->insertPosValue(position);
    ui->widPosChart->update();
}

void MainWindow::updateChart(int newPos)
{
    DrawPosChart(newPos);
}
