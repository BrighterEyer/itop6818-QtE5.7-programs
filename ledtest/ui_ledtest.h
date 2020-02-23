/********************************************************************************
** Form generated from reading UI file 'ledtest.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LEDTEST_H
#define UI_LEDTEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ledtest
{
public:
    QWidget *centralWidget;
    QCheckBox *checkBox_LED;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ledtest)
    {
        if (ledtest->objectName().isEmpty())
            ledtest->setObjectName(QStringLiteral("ledtest"));
        ledtest->resize(400, 300);
        centralWidget = new QWidget(ledtest);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        checkBox_LED = new QCheckBox(centralWidget);
        checkBox_LED->setObjectName(QStringLiteral("checkBox_LED"));
        checkBox_LED->setGeometry(QRect(60, 20, 98, 22));
        ledtest->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(ledtest);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 25));
        ledtest->setMenuBar(menuBar);
        mainToolBar = new QToolBar(ledtest);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        ledtest->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(ledtest);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        ledtest->setStatusBar(statusBar);

        retranslateUi(ledtest);

        QMetaObject::connectSlotsByName(ledtest);
    } // setupUi

    void retranslateUi(QMainWindow *ledtest)
    {
        ledtest->setWindowTitle(QApplication::translate("ledtest", "ledtest", 0));
        checkBox_LED->setText(QApplication::translate("ledtest", "LED", 0));
    } // retranslateUi

};

namespace Ui {
    class ledtest: public Ui_ledtest {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LEDTEST_H
