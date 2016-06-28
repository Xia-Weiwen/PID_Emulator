#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    initGUI();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::initGUI()
{
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
    ui->sldPosition->setValue(ui->lblCurTarget->text().toInt());
}

void MainWindow::on_btnSetPID_clicked()
{
    ui->lblPosCurP->setText(ui->editP->text());
    ui->lblPosCurI->setText(ui->editI->text());
    ui->lblPosCurD->setText(ui->editD->text());
}

void MainWindow::on_btnQuit_clicked()
{
    qApp->quit();
}
