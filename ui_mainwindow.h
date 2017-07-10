/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
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
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "glwidget.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *quit;
    QAction *log_rec;
    QAction *log_stop;
    QAction *log_play;
    QAction *log_fast;
    QAction *log_slow;
    QAction *auto_resize;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QSlider *horizontalSlider;
    GLWidget *openGLWidget;
    QMenuBar *menuBar;
    QMenu *menu_1;
    QMenu *menu_2;
    QStatusBar *statusBar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(800, 600);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setStyleSheet(QStringLiteral(""));
        quit = new QAction(MainWindow);
        quit->setObjectName(QStringLiteral("quit"));
        log_rec = new QAction(MainWindow);
        log_rec->setObjectName(QStringLiteral("log_rec"));
        log_rec->setCheckable(true);
        log_rec->setChecked(false);
        log_rec->setEnabled(true);
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/images/rec.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QStringLiteral(":/icons/images/end.png"), QSize(), QIcon::Normal, QIcon::On);
        log_rec->setIcon(icon);
        log_stop = new QAction(MainWindow);
        log_stop->setObjectName(QStringLiteral("log_stop"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icons/images/stop.png"), QSize(), QIcon::Normal, QIcon::Off);
        log_stop->setIcon(icon1);
        log_play = new QAction(MainWindow);
        log_play->setObjectName(QStringLiteral("log_play"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icons/images/play.png"), QSize(), QIcon::Normal, QIcon::Off);
        log_play->setIcon(icon2);
        log_fast = new QAction(MainWindow);
        log_fast->setObjectName(QStringLiteral("log_fast"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/icons/images/fast.png"), QSize(), QIcon::Normal, QIcon::Off);
        log_fast->setIcon(icon3);
        log_slow = new QAction(MainWindow);
        log_slow->setObjectName(QStringLiteral("log_slow"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/icons/images/slow.png"), QSize(), QIcon::Normal, QIcon::Off);
        log_slow->setIcon(icon4);
        auto_resize = new QAction(MainWindow);
        auto_resize->setObjectName(QStringLiteral("auto_resize"));
        auto_resize->setCheckable(true);
        auto_resize->setChecked(true);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy1);
        centralWidget->setStyleSheet(QStringLiteral(""));
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalSlider = new QSlider(centralWidget);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(horizontalSlider->sizePolicy().hasHeightForWidth());
        horizontalSlider->setSizePolicy(sizePolicy2);
        horizontalSlider->setMaximumSize(QSize(16777215, 15));
        horizontalSlider->setPageStep(1);
        horizontalSlider->setOrientation(Qt::Horizontal);

        verticalLayout_2->addWidget(horizontalSlider);

        openGLWidget = new GLWidget(centralWidget);
        openGLWidget->setObjectName(QStringLiteral("openGLWidget"));

        verticalLayout_2->addWidget(openGLWidget);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 800, 22));
        menu_1 = new QMenu(menuBar);
        menu_1->setObjectName(QStringLiteral("menu_1"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QStringLiteral("menu_2"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        sizePolicy.setHeightForWidth(toolBar->sizePolicy().hasHeightForWidth());
        toolBar->setSizePolicy(sizePolicy);
        toolBar->setMinimumSize(QSize(0, 0));
        toolBar->setStyleSheet(QStringLiteral("border-width:0px;"));
        toolBar->setToolButtonStyle(Qt::ToolButtonFollowStyle);
        toolBar->setFloatable(false);
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menuBar->addAction(menu_1->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menu_1->addAction(quit);
        menu_2->addAction(auto_resize);
        toolBar->addAction(log_rec);
        toolBar->addSeparator();
        toolBar->addAction(log_play);
        toolBar->addAction(log_stop);
        toolBar->addAction(log_slow);
        toolBar->addAction(log_fast);
        toolBar->addSeparator();

        retranslateUi(MainWindow);
        QObject::connect(quit, SIGNAL(triggered()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        quit->setText(QApplication::translate("MainWindow", "\347\265\202\344\272\206", Q_NULLPTR));
        log_rec->setText(QApplication::translate("MainWindow", "\343\203\255\343\202\260", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        log_rec->setToolTip(QApplication::translate("MainWindow", "\343\203\255\343\202\260\343\202\222\345\217\226\343\202\213", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        log_stop->setText(QApplication::translate("MainWindow", "\344\270\200\346\231\202\345\201\234\346\255\242", Q_NULLPTR));
        log_play->setText(QApplication::translate("MainWindow", "\345\206\215\347\224\237", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        log_play->setToolTip(QApplication::translate("MainWindow", "\345\206\215\347\224\237", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        log_fast->setText(QApplication::translate("MainWindow", "\346\227\251\351\200\201\343\202\212", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        log_fast->setToolTip(QApplication::translate("MainWindow", "\346\227\251\351\200\201\343\202\212", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        log_slow->setText(QApplication::translate("MainWindow", "\351\200\206\345\206\215\347\224\237", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        log_slow->setToolTip(QApplication::translate("MainWindow", "\351\200\206\345\206\215\347\224\237", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        auto_resize->setText(QApplication::translate("MainWindow", "\345\233\272\345\256\232\343\202\242\343\202\271\343\203\232\343\202\257\343\203\210\346\257\224", Q_NULLPTR));
        menu_1->setTitle(QApplication::translate("MainWindow", "\343\203\225\343\202\241\343\202\244\343\203\253", Q_NULLPTR));
        menu_2->setTitle(QApplication::translate("MainWindow", "\350\241\250\347\244\272", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
