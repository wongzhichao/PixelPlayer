/********************************************************************************
** Form generated from reading UI file 'pixelplayer.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PIXELPLAYER_H
#define UI_PIXELPLAYER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PixelPlayerClass
{
public:
    QAction *actionOpen;
    QAction *actionExit;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuVideoSize;
    QMenu *menuPixFmt;
    QMenu *menuRatio;
    QMenu *menuAbout;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *PixelPlayerClass)
    {
        if (PixelPlayerClass->objectName().isEmpty())
            PixelPlayerClass->setObjectName(QStringLiteral("PixelPlayerClass"));
        PixelPlayerClass->resize(600, 400);
        actionOpen = new QAction(PixelPlayerClass);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        actionExit = new QAction(PixelPlayerClass);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        centralWidget = new QWidget(PixelPlayerClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        PixelPlayerClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(PixelPlayerClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 26));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuVideoSize = new QMenu(menuBar);
        menuVideoSize->setObjectName(QStringLiteral("menuVideoSize"));
        menuPixFmt = new QMenu(menuBar);
        menuPixFmt->setObjectName(QStringLiteral("menuPixFmt"));
        menuRatio = new QMenu(menuBar);
        menuRatio->setObjectName(QStringLiteral("menuRatio"));
        menuAbout = new QMenu(menuBar);
        menuAbout->setObjectName(QStringLiteral("menuAbout"));
        PixelPlayerClass->setMenuBar(menuBar);
        statusBar = new QStatusBar(PixelPlayerClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        PixelPlayerClass->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuVideoSize->menuAction());
        menuBar->addAction(menuPixFmt->menuAction());
        menuBar->addAction(menuRatio->menuAction());
        menuBar->addAction(menuAbout->menuAction());
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionExit);

        retranslateUi(PixelPlayerClass);

        QMetaObject::connectSlotsByName(PixelPlayerClass);
    } // setupUi

    void retranslateUi(QMainWindow *PixelPlayerClass)
    {
        PixelPlayerClass->setWindowTitle(QApplication::translate("PixelPlayerClass", "PixelPlayer", 0));
        actionOpen->setText(QApplication::translate("PixelPlayerClass", "\346\211\223\345\274\200", 0));
        actionExit->setText(QApplication::translate("PixelPlayerClass", "\351\200\200\345\207\272", 0));
        menuFile->setTitle(QApplication::translate("PixelPlayerClass", "\346\226\207\344\273\266", 0));
        menuVideoSize->setTitle(QApplication::translate("PixelPlayerClass", "\345\210\206\350\276\250\347\216\207", 0));
        menuPixFmt->setTitle(QApplication::translate("PixelPlayerClass", "\346\240\274\345\274\217", 0));
        menuRatio->setTitle(QApplication::translate("PixelPlayerClass", "\346\257\224\344\276\213", 0));
        menuAbout->setTitle(QApplication::translate("PixelPlayerClass", "\345\205\263\344\272\216", 0));
    } // retranslateUi

};

namespace Ui {
    class PixelPlayerClass: public Ui_PixelPlayerClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PIXELPLAYER_H
