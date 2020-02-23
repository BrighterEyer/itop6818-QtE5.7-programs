/********************************************************************************
** Form generated from reading UI file 'uarttest.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UARTTEST_H
#define UI_UARTTEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_uarttest
{
public:
    QTextEdit *m_receive;
    QTextEdit *m_send;
    QPushButton *m_sendButton;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QWidget *uarttest)
    {
        if (uarttest->objectName().isEmpty())
            uarttest->setObjectName(QStringLiteral("uarttest"));
        uarttest->resize(441, 485);
        m_receive = new QTextEdit(uarttest);
        m_receive->setObjectName(QStringLiteral("m_receive"));
        m_receive->setGeometry(QRect(10, 30, 421, 191));
        m_send = new QTextEdit(uarttest);
        m_send->setObjectName(QStringLiteral("m_send"));
        m_send->setGeometry(QRect(10, 270, 421, 171));
        m_sendButton = new QPushButton(uarttest);
        m_sendButton->setObjectName(QStringLiteral("m_sendButton"));
        m_sendButton->setGeometry(QRect(170, 450, 99, 27));
        label = new QLabel(uarttest);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 91, 17));
        label_2 = new QLabel(uarttest);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 250, 71, 17));

        retranslateUi(uarttest);

        QMetaObject::connectSlotsByName(uarttest);
    } // setupUi

    void retranslateUi(QWidget *uarttest)
    {
        uarttest->setWindowTitle(QApplication::translate("uarttest", "uarttest", 0));
        m_sendButton->setText(QApplication::translate("uarttest", "Send", 0));
        label->setText(QApplication::translate("uarttest", "ReceiveEdit", 0));
        label_2->setText(QApplication::translate("uarttest", "SendEdit", 0));
    } // retranslateUi

};

namespace Ui {
    class uarttest: public Ui_uarttest {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UARTTEST_H
