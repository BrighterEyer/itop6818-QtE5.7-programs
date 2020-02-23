/********************************************************************************
** Form generated from reading UI file 'cantest.ui'
**
** Created: Mon Nov 6 00:58:21 2017
**      by: Qt User Interface Compiler version 4.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CANTEST_H
#define UI_CANTEST_H

#include <QtCore/QVariant>
#include <QAction>
#include <QApplication>
#include <QButtonGroup>
#include <QHeaderView>
#include <QLabel>
#include <QMainWindow>
#include <QMenu>
#include <QMenuBar>
#include <QPushButton>
#include <QStatusBar>
#include <QTextEdit>
#include <QToolBar>
#include <QWidget>

QT_BEGIN_NAMESPACE

class Ui_cantest
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QLabel *label_2;
    QPushButton *m_sendbutton;
    QTextEdit *m_receive;
    QTextEdit *m_send;
    QMenuBar *menuBar;
    QMenu *menuCAN;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QDialog *cantest)
    {
        if (cantest->objectName().isEmpty())
            cantest->setObjectName(QString::fromUtf8("cantest"));
        cantest->resize(431, 467);
        centralWidget = new QWidget(cantest);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 30, 81, 16));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 200, 57, 15));
        m_sendbutton = new QPushButton(centralWidget);
        m_sendbutton->setObjectName(QString::fromUtf8("m_sendbutton"));
        m_sendbutton->setGeometry(QRect(180, 370, 80, 23));
        m_receive = new QTextEdit(centralWidget);
        m_receive->setObjectName(QString::fromUtf8("m_receive"));
        m_receive->setGeometry(QRect(40, 50, 331, 131));
        m_send = new QTextEdit(centralWidget);
        m_send->setObjectName(QString::fromUtf8("m_send"));
        m_send->setGeometry(QRect(40, 220, 331, 141));
        menuBar = new QMenuBar(cantest);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 431, 20));
        menuCAN = new QMenu(menuBar);
        menuCAN->setObjectName(QString::fromUtf8("menuCAN"));
        mainToolBar = new QToolBar(cantest);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        statusBar = new QStatusBar(cantest);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));


        menuBar->addAction(menuCAN->menuAction());

        retranslateUi(cantest);

        QMetaObject::connectSlotsByName(cantest);
    } // setupUi

    void retranslateUi(QDialog *cantest)
    {
        cantest->setWindowTitle(QApplication::translate("cantest", "cantest", 0));
        label->setText(QApplication::translate("cantest", "ReceiveEdit", 0));
        label_2->setText(QApplication::translate("cantest", "SendEdit", 0));
        m_sendbutton->setText(QApplication::translate("cantest", "Send", 0));
        m_send->setHtml(QApplication::translate("cantest", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">123</p></body></html>", 0));
        menuCAN->setTitle(QApplication::translate("cantest", "CAN", 0));
    } // retranslateUi

};

namespace Ui {
    class cantest: public Ui_cantest {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CANTEST_H
