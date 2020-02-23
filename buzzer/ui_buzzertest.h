/********************************************************************************
** Form generated from reading UI file 'buzzertest.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUZZERTEST_H
#define UI_BUZZERTEST_H

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

class Ui_buzzertest
{
public:
    QWidget *centralWidget;
    QCheckBox *checkBox_Buzzer;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *buzzertest)
    {
        if (buzzertest->objectName().isEmpty())
            buzzertest->setObjectName(QStringLiteral("buzzertest"));
        buzzertest->resize(400, 300);
        centralWidget = new QWidget(buzzertest);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        checkBox_Buzzer = new QCheckBox(centralWidget);
        checkBox_Buzzer->setObjectName(QStringLiteral("checkBox_Buzzer"));
        checkBox_Buzzer->setGeometry(QRect(90, 40, 98, 22));
        buzzertest->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(buzzertest);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 25));
        buzzertest->setMenuBar(menuBar);
        mainToolBar = new QToolBar(buzzertest);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        buzzertest->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(buzzertest);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        buzzertest->setStatusBar(statusBar);

        retranslateUi(buzzertest);

        QMetaObject::connectSlotsByName(buzzertest);
    } // setupUi

    void retranslateUi(QMainWindow *buzzertest)
    {
        buzzertest->setWindowTitle(QApplication::translate("buzzertest", "buzzertest", 0));
        checkBox_Buzzer->setText(QApplication::translate("buzzertest", "BUZZER", 0));
    } // retranslateUi

};

namespace Ui {
    class buzzertest: public Ui_buzzertest {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUZZERTEST_H
