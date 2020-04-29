/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include "mapwidget.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionUSA;
    QAction *actionRandom_A;
    QAction *actionUSA_FLYG;
    QAction *action5Noder;
    QAction *actionRagnarsTest;
    MapWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menuGrafer;
    QMenu *menuTest;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(400, 300);
        actionUSA = new QAction(MainWindow);
        actionUSA->setObjectName(QStringLiteral("actionUSA"));
        actionRandom_A = new QAction(MainWindow);
        actionRandom_A->setObjectName(QStringLiteral("actionRandom_A"));
        actionUSA_FLYG = new QAction(MainWindow);
        actionUSA_FLYG->setObjectName(QStringLiteral("actionUSA_FLYG"));
        action5Noder = new QAction(MainWindow);
        action5Noder->setObjectName(QStringLiteral("action5Noder"));
        actionRagnarsTest = new QAction(MainWindow);
        actionRagnarsTest->setObjectName(QStringLiteral("actionRagnarsTest"));
        centralWidget = new MapWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 22));
        menuGrafer = new QMenu(menuBar);
        menuGrafer->setObjectName(QStringLiteral("menuGrafer"));
        menuTest = new QMenu(menuBar);
        menuTest->setObjectName(QStringLiteral("menuTest"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuGrafer->menuAction());
        menuBar->addAction(menuTest->menuAction());
        menuGrafer->addAction(actionUSA);
        menuGrafer->addAction(actionUSA_FLYG);
        menuGrafer->addAction(actionRandom_A);
        menuGrafer->addAction(action5Noder);
        menuTest->addAction(actionRagnarsTest);
        mainToolBar->addAction(actionUSA);
        mainToolBar->addAction(actionUSA_FLYG);
        mainToolBar->addAction(action5Noder);
        mainToolBar->addAction(actionRandom_A);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionRagnarsTest);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionUSA->setText(QApplication::translate("MainWindow", "USA", nullptr));
        actionRandom_A->setText(QApplication::translate("MainWindow", "Random A", nullptr));
        actionUSA_FLYG->setText(QApplication::translate("MainWindow", "USA+FLYG", nullptr));
        action5Noder->setText(QApplication::translate("MainWindow", "5Noder", nullptr));
        actionRagnarsTest->setText(QApplication::translate("MainWindow", "RagnarsTest", nullptr));
        menuGrafer->setTitle(QApplication::translate("MainWindow", "Grafer", nullptr));
        menuTest->setTitle(QApplication::translate("MainWindow", "Test", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
