/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_Quit;
    QAction *actionAbout_Qt;
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *PositionTab;
    QSlider *sldPosition;
    QLabel *lblLowerLimit;
    QLabel *lblUpperLimit;
    QGroupBox *groupBox;
    QPushButton *btnSetPID;
    QLineEdit *editD;
    QLabel *lblPosCurP;
    QLabel *lblCurD;
    QLabel *lblI;
    QLineEdit *editI;
    QLabel *lblCurI;
    QLabel *lblP;
    QLabel *lblPosCurI;
    QLineEdit *editP;
    QLabel *lblD;
    QLabel *lblPosCurD;
    QLabel *lblCurP;
    QGroupBox *groupBox_2;
    QLabel *lblCurTarget;
    QLabel *lblCurPos;
    QPushButton *btnSetPos;
    QLineEdit *editPos;
    QLabel *lblPosition;
    QLabel *lblOrigin;
    QWidget *SpeedTab;
    QLabel *lblTitle;
    QLabel *lblAuthor;
    QPushButton *btnQuit;
    QLabel *lblWarning;
    QMenuBar *menuBar;
    QMenu *menuAbout;
    QMenu *menuAbout_2;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(651, 422);
        action_Quit = new QAction(MainWindow);
        action_Quit->setObjectName(QStringLiteral("action_Quit"));
        actionAbout_Qt = new QAction(MainWindow);
        actionAbout_Qt->setObjectName(QStringLiteral("actionAbout_Qt"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 30, 631, 260));
        PositionTab = new QWidget();
        PositionTab->setObjectName(QStringLiteral("PositionTab"));
        sldPosition = new QSlider(PositionTab);
        sldPosition->setObjectName(QStringLiteral("sldPosition"));
        sldPosition->setGeometry(QRect(30, 185, 561, 29));
        sldPosition->setMinimum(-10000);
        sldPosition->setMaximum(10000);
        sldPosition->setValue(0);
        sldPosition->setOrientation(Qt::Horizontal);
        sldPosition->setInvertedAppearance(false);
        sldPosition->setTickPosition(QSlider::TicksAbove);
        sldPosition->setTickInterval(1000);
        lblLowerLimit = new QLabel(PositionTab);
        lblLowerLimit->setObjectName(QStringLiteral("lblLowerLimit"));
        lblLowerLimit->setGeometry(QRect(10, 160, 60, 20));
        lblLowerLimit->setAlignment(Qt::AlignCenter);
        lblUpperLimit = new QLabel(PositionTab);
        lblUpperLimit->setObjectName(QStringLiteral("lblUpperLimit"));
        lblUpperLimit->setGeometry(QRect(550, 160, 60, 20));
        lblUpperLimit->setAlignment(Qt::AlignCenter);
        groupBox = new QGroupBox(PositionTab);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 601, 91));
        btnSetPID = new QPushButton(groupBox);
        btnSetPID->setObjectName(QStringLiteral("btnSetPID"));
        btnSetPID->setGeometry(QRect(510, 50, 80, 30));
        editD = new QLineEdit(groupBox);
        editD->setObjectName(QStringLiteral("editD"));
        editD->setGeometry(QRect(510, 20, 80, 30));
        editD->setAlignment(Qt::AlignCenter);
        lblPosCurP = new QLabel(groupBox);
        lblPosCurP->setObjectName(QStringLiteral("lblPosCurP"));
        lblPosCurP->setGeometry(QRect(119, 50, 50, 31));
        lblPosCurP->setAlignment(Qt::AlignCenter);
        lblCurD = new QLabel(groupBox);
        lblCurD->setObjectName(QStringLiteral("lblCurD"));
        lblCurD->setGeometry(QRect(330, 50, 91, 31));
        lblCurD->setAlignment(Qt::AlignCenter);
        lblI = new QLabel(groupBox);
        lblI->setObjectName(QStringLiteral("lblI"));
        lblI->setGeometry(QRect(210, 20, 100, 30));
        lblI->setAlignment(Qt::AlignCenter);
        editI = new QLineEdit(groupBox);
        editI->setObjectName(QStringLiteral("editI"));
        editI->setGeometry(QRect(310, 20, 80, 30));
        editI->setAlignment(Qt::AlignCenter);
        lblCurI = new QLabel(groupBox);
        lblCurI->setObjectName(QStringLiteral("lblCurI"));
        lblCurI->setGeometry(QRect(180, 50, 81, 31));
        lblCurI->setAlignment(Qt::AlignCenter);
        lblP = new QLabel(groupBox);
        lblP->setObjectName(QStringLiteral("lblP"));
        lblP->setGeometry(QRect(20, 20, 110, 30));
        lblP->setAlignment(Qt::AlignCenter);
        lblPosCurI = new QLabel(groupBox);
        lblPosCurI->setObjectName(QStringLiteral("lblPosCurI"));
        lblPosCurI->setGeometry(QRect(260, 50, 50, 31));
        lblPosCurI->setAlignment(Qt::AlignCenter);
        editP = new QLineEdit(groupBox);
        editP->setObjectName(QStringLiteral("editP"));
        editP->setGeometry(QRect(130, 20, 80, 30));
        editP->setAlignment(Qt::AlignCenter);
        lblD = new QLabel(groupBox);
        lblD->setObjectName(QStringLiteral("lblD"));
        lblD->setGeometry(QRect(390, 20, 121, 30));
        lblD->setAlignment(Qt::AlignCenter);
        lblPosCurD = new QLabel(groupBox);
        lblPosCurD->setObjectName(QStringLiteral("lblPosCurD"));
        lblPosCurD->setGeometry(QRect(420, 50, 50, 31));
        lblPosCurD->setAlignment(Qt::AlignCenter);
        lblCurP = new QLabel(groupBox);
        lblCurP->setObjectName(QStringLiteral("lblCurP"));
        lblCurP->setGeometry(QRect(20, 50, 91, 31));
        lblCurP->setAlignment(Qt::AlignCenter);
        groupBox_2 = new QGroupBox(PositionTab);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 100, 601, 61));
        lblCurTarget = new QLabel(groupBox_2);
        lblCurTarget->setObjectName(QStringLiteral("lblCurTarget"));
        lblCurTarget->setGeometry(QRect(380, 20, 91, 31));
        lblCurTarget->setAlignment(Qt::AlignCenter);
        lblCurPos = new QLabel(groupBox_2);
        lblCurPos->setObjectName(QStringLiteral("lblCurPos"));
        lblCurPos->setGeometry(QRect(240, 20, 131, 31));
        lblCurPos->setAlignment(Qt::AlignCenter);
        btnSetPos = new QPushButton(groupBox_2);
        btnSetPos->setObjectName(QStringLiteral("btnSetPos"));
        btnSetPos->setGeometry(QRect(490, 20, 101, 30));
        editPos = new QLineEdit(groupBox_2);
        editPos->setObjectName(QStringLiteral("editPos"));
        editPos->setGeometry(QRect(130, 20, 100, 30));
        editPos->setAlignment(Qt::AlignCenter);
        lblPosition = new QLabel(groupBox_2);
        lblPosition->setObjectName(QStringLiteral("lblPosition"));
        lblPosition->setGeometry(QRect(10, 20, 121, 30));
        lblPosition->setAlignment(Qt::AlignCenter);
        lblOrigin = new QLabel(PositionTab);
        lblOrigin->setObjectName(QStringLiteral("lblOrigin"));
        lblOrigin->setGeometry(QRect(280, 160, 60, 20));
        lblOrigin->setAlignment(Qt::AlignCenter);
        tabWidget->addTab(PositionTab, QString());
        SpeedTab = new QWidget();
        SpeedTab->setObjectName(QStringLiteral("SpeedTab"));
        tabWidget->addTab(SpeedTab, QString());
        lblTitle = new QLabel(centralWidget);
        lblTitle->setObjectName(QStringLiteral("lblTitle"));
        lblTitle->setGeometry(QRect(200, -10, 250, 50));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        lblTitle->setFont(font);
        lblTitle->setAlignment(Qt::AlignCenter);
        lblAuthor = new QLabel(centralWidget);
        lblAuthor->setObjectName(QStringLiteral("lblAuthor"));
        lblAuthor->setGeometry(QRect(10, 320, 191, 30));
        lblAuthor->setAlignment(Qt::AlignCenter);
        btnQuit = new QPushButton(centralWidget);
        btnQuit->setObjectName(QStringLiteral("btnQuit"));
        btnQuit->setGeometry(QRect(510, 320, 99, 30));
        lblWarning = new QLabel(centralWidget);
        lblWarning->setObjectName(QStringLiteral("lblWarning"));
        lblWarning->setGeometry(QRect(20, 290, 451, 31));
        QFont font1;
        font1.setPointSize(13);
        lblWarning->setFont(font1);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 651, 26));
        menuAbout = new QMenu(menuBar);
        menuAbout->setObjectName(QStringLiteral("menuAbout"));
        menuAbout_2 = new QMenu(menuBar);
        menuAbout_2->setObjectName(QStringLiteral("menuAbout_2"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuAbout->menuAction());
        menuBar->addAction(menuAbout_2->menuAction());
        menuAbout->addAction(action_Quit);
        menuAbout_2->addAction(actionAbout_Qt);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        action_Quit->setText(QApplication::translate("MainWindow", "&Quit", 0));
        actionAbout_Qt->setText(QApplication::translate("MainWindow", "About Qt", 0));
        lblLowerLimit->setText(QApplication::translate("MainWindow", "-1000", 0));
        lblUpperLimit->setText(QApplication::translate("MainWindow", "1000", 0));
        groupBox->setTitle(QApplication::translate("MainWindow", "PID", 0));
        btnSetPID->setText(QApplication::translate("MainWindow", "Set PID", 0));
        editD->setText(QApplication::translate("MainWindow", "1", 0));
        lblPosCurP->setText(QString());
        lblCurD->setText(QApplication::translate("MainWindow", "Current D:", 0));
        lblI->setText(QApplication::translate("MainWindow", "Integral(I)", 0));
        editI->setText(QApplication::translate("MainWindow", "1", 0));
        lblCurI->setText(QApplication::translate("MainWindow", "Current I:", 0));
        lblP->setText(QApplication::translate("MainWindow", "Proportion(P)", 0));
        lblPosCurI->setText(QString());
        editP->setText(QApplication::translate("MainWindow", "1", 0));
        lblD->setText(QApplication::translate("MainWindow", "Derivative(D)", 0));
        lblPosCurD->setText(QString());
        lblCurP->setText(QApplication::translate("MainWindow", "Current P:", 0));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Position", 0));
        lblCurTarget->setText(QString());
        lblCurPos->setText(QApplication::translate("MainWindow", "Current Target:", 0));
        btnSetPos->setText(QApplication::translate("MainWindow", "Set && Move", 0));
        lblPosition->setText(QApplication::translate("MainWindow", "Target Position", 0));
        lblOrigin->setText(QApplication::translate("MainWindow", "0", 0));
        tabWidget->setTabText(tabWidget->indexOf(PositionTab), QApplication::translate("MainWindow", "Position Controller", 0));
        tabWidget->setTabText(tabWidget->indexOf(SpeedTab), QApplication::translate("MainWindow", "Speed Controller", 0));
        lblTitle->setText(QApplication::translate("MainWindow", "PID Emulator", 0));
        lblAuthor->setText(QApplication::translate("MainWindow", "(c)2016 Xia Weiwen", 0));
        btnQuit->setText(QApplication::translate("MainWindow", "&Quit", 0));
        lblWarning->setText(QString());
        menuAbout->setTitle(QApplication::translate("MainWindow", "File", 0));
        menuAbout_2->setTitle(QApplication::translate("MainWindow", "About", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
