/********************************************************************************
** Form generated from reading UI file 'relaytest.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RELAYTEST_H
#define UI_RELAYTEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_relaytest
{
public:
    QWidget *centralWidget;
    QPushButton *RELAY_Button;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *relaytest)
    {
        if (relaytest->objectName().isEmpty())
            relaytest->setObjectName(QStringLiteral("relaytest"));
        relaytest->resize(400, 300);
        centralWidget = new QWidget(relaytest);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        RELAY_Button = new QPushButton(centralWidget);
        RELAY_Button->setObjectName(QStringLiteral("RELAY_Button"));
        RELAY_Button->setGeometry(QRect(90, 60, 151, 81));
        QFont font;
        font.setFamily(QStringLiteral("WenQuanYi Micro Hei"));
        font.setPointSize(14);
        RELAY_Button->setFont(font);
        relaytest->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(relaytest);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 19));
        relaytest->setMenuBar(menuBar);
        mainToolBar = new QToolBar(relaytest);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        relaytest->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(relaytest);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        relaytest->setStatusBar(statusBar);

        retranslateUi(relaytest);

        QMetaObject::connectSlotsByName(relaytest);
    } // setupUi

    void retranslateUi(QMainWindow *relaytest)
    {
        relaytest->setWindowTitle(QApplication::translate("relaytest", "relaytest", 0));
        RELAY_Button->setText(QApplication::translate("relaytest", "RELAY", 0));
    } // retranslateUi

};

namespace Ui {
    class relaytest: public Ui_relaytest {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RELAYTEST_H
