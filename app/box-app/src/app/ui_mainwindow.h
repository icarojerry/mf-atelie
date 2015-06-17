/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_Print;
    QAction *action_Save;
    QAction *action_Exit;
    QAction *action_Undo;
    QAction *action_Redo;
    QAction *action_New_Client;
    QAction *actionNew_Request;
    QAction *action_Queen_s_Time;
    QAction *action_Application;
    QAction *action_Help;
    QAction *action_Connect;
    QAction *action_Disconnect;
    QAction *actionOptions;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menu_File;
    QMenu *menu_About;
    QMenu *menuReport;
    QMenu *menuQuery;
    QMenu *menu_Planning;
    QMenu *menuD;
    QMenu *menuEdit;
    QMenu *menu_Tools;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(578, 408);
        action_Print = new QAction(MainWindow);
        action_Print->setObjectName(QStringLiteral("action_Print"));
        QIcon icon;
        QString iconThemeName = QStringLiteral("document-print");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QStringLiteral(""), QSize(), QIcon::Normal, QIcon::Off);
        }
        action_Print->setIcon(icon);
        action_Save = new QAction(MainWindow);
        action_Save->setObjectName(QStringLiteral("action_Save"));
        QIcon icon1;
        iconThemeName = QStringLiteral("document-save");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon1 = QIcon::fromTheme(iconThemeName);
        } else {
            icon1.addFile(QStringLiteral(""), QSize(), QIcon::Normal, QIcon::Off);
        }
        action_Save->setIcon(icon1);
        action_Exit = new QAction(MainWindow);
        action_Exit->setObjectName(QStringLiteral("action_Exit"));
        QIcon icon2;
        iconThemeName = QStringLiteral("application-exit");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon2 = QIcon::fromTheme(iconThemeName);
        } else {
            icon2.addFile(QStringLiteral(""), QSize(), QIcon::Normal, QIcon::Off);
        }
        action_Exit->setIcon(icon2);
        action_Undo = new QAction(MainWindow);
        action_Undo->setObjectName(QStringLiteral("action_Undo"));
        QIcon icon3;
        iconThemeName = QStringLiteral("edit-undo");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon3 = QIcon::fromTheme(iconThemeName);
        } else {
            icon3.addFile(QStringLiteral(""), QSize(), QIcon::Normal, QIcon::Off);
        }
        action_Undo->setIcon(icon3);
        action_Redo = new QAction(MainWindow);
        action_Redo->setObjectName(QStringLiteral("action_Redo"));
        QIcon icon4;
        iconThemeName = QStringLiteral("edit-redo");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon4 = QIcon::fromTheme(iconThemeName);
        } else {
            icon4.addFile(QStringLiteral(""), QSize(), QIcon::Normal, QIcon::Off);
        }
        action_Redo->setIcon(icon4);
        action_New_Client = new QAction(MainWindow);
        action_New_Client->setObjectName(QStringLiteral("action_New_Client"));
        QIcon icon5;
        icon5.addFile(QStringLiteral("Resources/icon/add_client.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_New_Client->setIcon(icon5);
        actionNew_Request = new QAction(MainWindow);
        actionNew_Request->setObjectName(QStringLiteral("actionNew_Request"));
        QIcon icon6;
        icon6.addFile(QStringLiteral("Resources/icon/add_request.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew_Request->setIcon(icon6);
        action_Queen_s_Time = new QAction(MainWindow);
        action_Queen_s_Time->setObjectName(QStringLiteral("action_Queen_s_Time"));
        QIcon icon7;
        iconThemeName = QStringLiteral("dialog-information");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon7 = QIcon::fromTheme(iconThemeName);
        } else {
            icon7.addFile(QStringLiteral(""), QSize(), QIcon::Normal, QIcon::Off);
        }
        action_Queen_s_Time->setIcon(icon7);
        action_Application = new QAction(MainWindow);
        action_Application->setObjectName(QStringLiteral("action_Application"));
        action_Application->setIcon(icon7);
        action_Help = new QAction(MainWindow);
        action_Help->setObjectName(QStringLiteral("action_Help"));
        QIcon icon8;
        iconThemeName = QStringLiteral("system-help");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon8 = QIcon::fromTheme(iconThemeName);
        } else {
            icon8.addFile(QStringLiteral(""), QSize(), QIcon::Normal, QIcon::Off);
        }
        action_Help->setIcon(icon8);
        action_Connect = new QAction(MainWindow);
        action_Connect->setObjectName(QStringLiteral("action_Connect"));
        QIcon icon9;
        iconThemeName = QStringLiteral("go-up");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon9 = QIcon::fromTheme(iconThemeName);
        } else {
            icon9.addFile(QStringLiteral(""), QSize(), QIcon::Normal, QIcon::Off);
        }
        action_Connect->setIcon(icon9);
        action_Disconnect = new QAction(MainWindow);
        action_Disconnect->setObjectName(QStringLiteral("action_Disconnect"));
        QIcon icon10;
        iconThemeName = QStringLiteral("go-down");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon10 = QIcon::fromTheme(iconThemeName);
        } else {
            icon10.addFile(QStringLiteral(""), QSize(), QIcon::Normal, QIcon::Off);
        }
        action_Disconnect->setIcon(icon10);
        actionOptions = new QAction(MainWindow);
        actionOptions->setObjectName(QStringLiteral("actionOptions"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 578, 19));
        menu_File = new QMenu(menuBar);
        menu_File->setObjectName(QStringLiteral("menu_File"));
        menu_About = new QMenu(menuBar);
        menu_About->setObjectName(QStringLiteral("menu_About"));
        menuReport = new QMenu(menuBar);
        menuReport->setObjectName(QStringLiteral("menuReport"));
        menuQuery = new QMenu(menuBar);
        menuQuery->setObjectName(QStringLiteral("menuQuery"));
        menu_Planning = new QMenu(menuBar);
        menu_Planning->setObjectName(QStringLiteral("menu_Planning"));
        menuD = new QMenu(menu_Planning);
        menuD->setObjectName(QStringLiteral("menuD"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QStringLiteral("menuEdit"));
        menu_Tools = new QMenu(menuBar);
        menu_Tools->setObjectName(QStringLiteral("menu_Tools"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu_File->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menu_Planning->menuAction());
        menuBar->addAction(menuQuery->menuAction());
        menuBar->addAction(menuReport->menuAction());
        menuBar->addAction(menu_Tools->menuAction());
        menuBar->addAction(menu_About->menuAction());
        menu_File->addAction(action_Connect);
        menu_File->addAction(action_Disconnect);
        menu_File->addAction(action_Save);
        menu_File->addAction(action_Print);
        menu_File->addSeparator();
        menu_File->addAction(action_Exit);
        menu_About->addAction(action_Application);
        menu_About->addAction(action_Queen_s_Time);
        menu_About->addAction(action_Help);
        menu_Planning->addAction(menuD->menuAction());
        menuD->addAction(action_New_Client);
        menuD->addAction(actionNew_Request);
        menuEdit->addAction(action_Redo);
        menuEdit->addAction(action_Undo);
        menu_Tools->addSeparator();
        menu_Tools->addSeparator();
        menu_Tools->addAction(actionOptions);
        mainToolBar->addAction(action_Connect);
        mainToolBar->addAction(action_Disconnect);
        mainToolBar->addAction(action_Save);
        mainToolBar->addAction(action_New_Client);
        mainToolBar->addAction(actionNew_Request);
        mainToolBar->addSeparator();
        mainToolBar->addAction(action_Undo);
        mainToolBar->addAction(action_Redo);
        mainToolBar->addSeparator();
        mainToolBar->addAction(action_Print);
        mainToolBar->addAction(action_Help);
        mainToolBar->addAction(action_Exit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "unnamed", 0));
        action_Print->setText(QApplication::translate("MainWindow", "&Print", 0));
#ifndef QT_NO_TOOLTIP
        action_Print->setToolTip(QApplication::translate("MainWindow", "Print the current document.", 0));
#endif // QT_NO_TOOLTIP
        action_Print->setShortcut(QApplication::translate("MainWindow", "Ctrl+P", 0));
        action_Save->setText(QApplication::translate("MainWindow", "&Save", 0));
#ifndef QT_NO_TOOLTIP
        action_Save->setToolTip(QApplication::translate("MainWindow", "Save the current document.", 0));
#endif // QT_NO_TOOLTIP
        action_Save->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", 0));
        action_Exit->setText(QApplication::translate("MainWindow", "&Exit", 0));
#ifndef QT_NO_TOOLTIP
        action_Exit->setToolTip(QApplication::translate("MainWindow", "Close the application.", 0));
#endif // QT_NO_TOOLTIP
        action_Exit->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", 0));
        action_Undo->setText(QApplication::translate("MainWindow", "&Undo", 0));
#ifndef QT_NO_TOOLTIP
        action_Undo->setToolTip(QApplication::translate("MainWindow", "Undo the last action.", 0));
#endif // QT_NO_TOOLTIP
        action_Undo->setShortcut(QApplication::translate("MainWindow", "Ctrl+Z", 0));
        action_Redo->setText(QApplication::translate("MainWindow", "&Redo", 0));
#ifndef QT_NO_TOOLTIP
        action_Redo->setToolTip(QApplication::translate("MainWindow", "Redo the last action.", 0));
#endif // QT_NO_TOOLTIP
        action_Redo->setShortcut(QApplication::translate("MainWindow", "Ctrl+Y", 0));
        action_New_Client->setText(QApplication::translate("MainWindow", "New &Client", 0));
#ifndef QT_NO_TOOLTIP
        action_New_Client->setToolTip(QApplication::translate("MainWindow", "Register a new client.", 0));
#endif // QT_NO_TOOLTIP
        action_New_Client->setShortcut(QApplication::translate("MainWindow", "Ctrl+N", 0));
        actionNew_Request->setText(QApplication::translate("MainWindow", "New &Request", 0));
#ifndef QT_NO_TOOLTIP
        actionNew_Request->setToolTip(QApplication::translate("MainWindow", "Register a new request.", 0));
#endif // QT_NO_TOOLTIP
        action_Queen_s_Time->setText(QApplication::translate("MainWindow", "&Queen's Time", 0));
#ifndef QT_NO_TOOLTIP
        action_Queen_s_Time->setToolTip(QApplication::translate("MainWindow", "Information about Queen's Time.", 0));
#endif // QT_NO_TOOLTIP
        action_Application->setText(QApplication::translate("MainWindow", "&Application", 0));
#ifndef QT_NO_TOOLTIP
        action_Application->setToolTip(QApplication::translate("MainWindow", "Information about the application.", 0));
#endif // QT_NO_TOOLTIP
        action_Help->setText(QApplication::translate("MainWindow", "&Help", 0));
#ifndef QT_NO_TOOLTIP
        action_Help->setToolTip(QApplication::translate("MainWindow", "Help about the application", 0));
#endif // QT_NO_TOOLTIP
        action_Help->setShortcut(QApplication::translate("MainWindow", "Ctrl+H", 0));
        action_Connect->setText(QApplication::translate("MainWindow", "&Connect", 0));
#ifndef QT_NO_TOOLTIP
        action_Connect->setToolTip(QApplication::translate("MainWindow", "Connects to the system.", 0));
#endif // QT_NO_TOOLTIP
        action_Disconnect->setText(QApplication::translate("MainWindow", "&Disconnect", 0));
#ifndef QT_NO_TOOLTIP
        action_Disconnect->setToolTip(QApplication::translate("MainWindow", "disconnects to the system.", 0));
#endif // QT_NO_TOOLTIP
        actionOptions->setText(QApplication::translate("MainWindow", "Options...", 0));
        menu_File->setTitle(QApplication::translate("MainWindow", "&File", 0));
        menu_About->setTitle(QApplication::translate("MainWindow", "&About", 0));
        menuReport->setTitle(QApplication::translate("MainWindow", "&Report", 0));
        menuQuery->setTitle(QApplication::translate("MainWindow", "&Query", 0));
        menu_Planning->setTitle(QApplication::translate("MainWindow", "&Planning", 0));
        menuD->setTitle(QApplication::translate("MainWindow", "Register...", 0));
        menuEdit->setTitle(QApplication::translate("MainWindow", "&Edit", 0));
        menu_Tools->setTitle(QApplication::translate("MainWindow", "&Tools", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
