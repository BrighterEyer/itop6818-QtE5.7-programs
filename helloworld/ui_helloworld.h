/********************************************************************************
** Form generated from reading UI file 'helloworld.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELLOWORLD_H
#define UI_HELLOWORLD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_helloworld
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *helloworld)
    {
        if (helloworld->objectName().isEmpty())
            helloworld->setObjectName(QStringLiteral("helloworld"));
        helloworld->resize(400, 300);
        centralWidget = new QWidget(helloworld);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 40, 361, 101));
        helloworld->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(helloworld);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 25));
        helloworld->setMenuBar(menuBar);
        mainToolBar = new QToolBar(helloworld);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        helloworld->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(helloworld);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        helloworld->setStatusBar(statusBar);

        retranslateUi(helloworld);

        QMetaObject::connectSlotsByName(helloworld);
    } // setupUi

    void retranslateUi(QMainWindow *helloworld)
    {
        helloworld->setWindowTitle(QApplication::translate("helloworld", "helloworld", 0));
        label->setText(QApplication::translate("helloworld", "                                     helloworld", 0));
    } // retranslateUi

};

namespace Ui {
    class helloworld: public Ui_helloworld {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELLOWORLD_H
