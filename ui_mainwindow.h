/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
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
    QLabel *lblPosition;
    QLineEdit *editPos;
    QLineEdit *editP;
    QLabel *lblP;
    QPushButton *btnSetPos;
    QLabel *lblCurTarget;
    QLabel *lblI;
    QLineEdit *editI;
    QLabel *lblD;
    QLineEdit *editD;
    QPushButton *btnSetPID;
    QLabel *lblCurP;
    QLabel *lblPosCurP;
    QLabel *lblPosCurI;
    QLabel *lblCurI;
    QLabel *lblCurD;
    QLabel *lblPosCurD;
    QLabel *lblCurPos;
    QLabel *lblLowerLimit;
    QLabel *lblUpperLimit;
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
        sldPosition->setGeometry(QRect(30, 190, 561, 29));
        sldPosition->setMinimum(-1000);
        sldPosition->setMaximum(1000);
        sldPosition->setValue(0);
        sldPosition->setOrientation(Qt::Horizontal);
        sldPosition->setInvertedAppearance(false);
        sldPosition->setTickPosition(QSlider::TicksAbove);
        sldPosition->setTickInterval(100);
        lblPosition = new QLabel(PositionTab);
        lblPosition->setObjectName(QStringLiteral("lblPosition"));
        lblPosition->setGeometry(QRect(20, 20, 121, 30));
        lblPosition->setAlignment(Qt::AlignCenter);
        editPos = new QLineEdit(PositionTab);
        editPos->setObjectName(QStringLiteral("editPos"));
        editPos->setGeometry(QRect(140, 20, 100, 30));
        editPos->setAlignment(Qt::AlignCenter);
        editP = new QLineEdit(PositionTab);
        editP->setObjectName(QStringLiteral("editP"));
        editP->setGeometry(QRect(130, 70, 80, 30));
        editP->setAlignment(Qt::AlignCenter);
        lblP = new QLabel(PositionTab);
        lblP->setObjectName(QStringLiteral("lblP"));
        lblP->setGeometry(QRect(20, 70, 110, 30));
        lblP->setAlignment(Qt::AlignCenter);
        btnSetPos = new QPushButton(PositionTab);
        btnSetPos->setObjectName(QStringLiteral("btnSetPos"));
        btnSetPos->setGeometry(QRect(260, 20, 101, 30));
        lblCurTarget = new QLabel(PositionTab);
        lblCurTarget->setObjectName(QStringLiteral("lblCurTarget"));
        lblCurTarget->setGeometry(QRect(510, 20, 91, 31));
        lblCurTarget->setAlignment(Qt::AlignCenter);
        lblI = new QLabel(PositionTab);
        lblI->setObjectName(QStringLiteral("lblI"));
        lblI->setGeometry(QRect(210, 70, 100, 30));
        lblI->setAlignment(Qt::AlignCenter);
        editI = new QLineEdit(PositionTab);
        editI->setObjectName(QStringLiteral("editI"));
        editI->setGeometry(QRect(310, 70, 80, 30));
        editI->setAlignment(Qt::AlignCenter);
        lblD = new QLabel(PositionTab);
        lblD->setObjectName(QStringLiteral("lblD"));
        lblD->setGeometry(QRect(390, 70, 121, 30));
        lblD->setAlignment(Qt::AlignCenter);
        editD = new QLineEdit(PositionTab);
        editD->setObjectName(QStringLiteral("editD"));
        editD->setGeometry(QRect(510, 70, 80, 30));
        editD->setAlignment(Qt::AlignCenter);
        btnSetPID = new QPushButton(PositionTab);
        btnSetPID->setObjectName(QStringLiteral("btnSetPID"));
        btnSetPID->setGeometry(QRect(520, 120, 60, 30));
        lblCurP = new QLabel(PositionTab);
        lblCurP->setObjectName(QStringLiteral("lblCurP"));
        lblCurP->setGeometry(QRect(20, 120, 91, 31));
        lblCurP->setAlignment(Qt::AlignCenter);
        lblPosCurP = new QLabel(PositionTab);
        lblPosCurP->setObjectName(QStringLiteral("lblPosCurP"));
        lblPosCurP->setGeometry(QRect(119, 120, 50, 31));
        lblPosCurP->setAlignment(Qt::AlignCenter);
        lblPosCurI = new QLabel(PositionTab);
        lblPosCurI->setObjectName(QStringLiteral("lblPosCurI"));
        lblPosCurI->setGeometry(QRect(260, 120, 50, 31));
        lblPosCurI->setAlignment(Qt::AlignCenter);
        lblCurI = new QLabel(PositionTab);
        lblCurI->setObjectName(QStringLiteral("lblCurI"));
        lblCurI->setGeometry(QRect(180, 120, 81, 31));
        lblCurI->setAlignment(Qt::AlignCenter);
        lblCurD = new QLabel(PositionTab);
        lblCurD->setObjectName(QStringLiteral("lblCurD"));
        lblCurD->setGeometry(QRect(350, 120, 91, 31));
        lblCurD->setAlignment(Qt::AlignCenter);
        lblPosCurD = new QLabel(PositionTab);
        lblPosCurD->setObjectName(QStringLiteral("lblPosCurD"));
        lblPosCurD->setGeometry(QRect(440, 120, 50, 31));
        lblPosCurD->setAlignment(Qt::AlignCenter);
        lblCurPos = new QLabel(PositionTab);
        lblCurPos->setObjectName(QStringLiteral("lblCurPos"));
        lblCurPos->setGeometry(QRect(370, 20, 131, 31));
        lblCurPos->setAlignment(Qt::AlignCenter);
        lblLowerLimit = new QLabel(PositionTab);
        lblLowerLimit->setObjectName(QStringLiteral("lblLowerLimit"));
        lblLowerLimit->setGeometry(QRect(10, 160, 60, 20));
        lblLowerLimit->setAlignment(Qt::AlignCenter);
        lblUpperLimit = new QLabel(PositionTab);
        lblUpperLimit->setObjectName(QStringLiteral("lblUpperLimit"));
        lblUpperLimit->setGeometry(QRect(550, 160, 60, 20));
        lblUpperLimit->setAlignment(Qt::AlignCenter);
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
        lblAuthor->setGeometry(QRect(10, 330, 191, 20));
        lblAuthor->setAlignment(Qt::AlignCenter);
        btnQuit = new QPushButton(centralWidget);
        btnQuit->setObjectName(QStringLiteral("btnQuit"));
        btnQuit->setGeometry(QRect(510, 320, 99, 27));
        lblWarning = new QLabel(centralWidget);
        lblWarning->setObjectName(QStringLiteral("lblWarning"));
        lblWarning->setGeometry(QRect(20, 290, 451, 31));
        QFont font1;
        font1.setPointSize(13);
        lblWarning->setFont(font1);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 651, 31));
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
        lblPosition->setText(QApplication::translate("MainWindow", "Target Position", 0));
        editP->setText(QApplication::translate("MainWindow", "1", 0));
        lblP->setText(QApplication::translate("MainWindow", "Proportion(P)", 0));
        btnSetPos->setText(QApplication::translate("MainWindow", "Set && Move", 0));
        lblCurTarget->setText(QString());
        lblI->setText(QApplication::translate("MainWindow", "Integral(I)", 0));
        editI->setText(QApplication::translate("MainWindow", "1", 0));
        lblD->setText(QApplication::translate("MainWindow", "Derivative(D)", 0));
        editD->setText(QApplication::translate("MainWindow", "1", 0));
        btnSetPID->setText(QApplication::translate("MainWindow", "Set", 0));
        lblCurP->setText(QApplication::translate("MainWindow", "Current P:", 0));
        lblPosCurP->setText(QString());
        lblPosCurI->setText(QString());
        lblCurI->setText(QApplication::translate("MainWindow", "Current I:", 0));
        lblCurD->setText(QApplication::translate("MainWindow", "Current D:", 0));
        lblPosCurD->setText(QString());
        lblCurPos->setText(QApplication::translate("MainWindow", "Current Target:", 0));
        lblLowerLimit->setText(QApplication::translate("MainWindow", "-1000", 0));
        lblUpperLimit->setText(QApplication::translate("MainWindow", "1000", 0));
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
