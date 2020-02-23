/********************************************************************************
** Form generated from reading UI file 'adtest.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADTEST_H
#define UI_ADTEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_adtest
{
public:
    QLabel *Text;

    void setupUi(QWidget *adtest)
    {
        if (adtest->objectName().isEmpty())
            adtest->setObjectName(QStringLiteral("adtest"));
        adtest->resize(400, 300);
        Text = new QLabel(adtest);
        Text->setObjectName(QStringLiteral("Text"));
        Text->setGeometry(QRect(130, 120, 67, 17));

        retranslateUi(adtest);

        QMetaObject::connectSlotsByName(adtest);
    } // setupUi

    void retranslateUi(QWidget *adtest)
    {
        adtest->setWindowTitle(QApplication::translate("adtest", "adtest", 0));
        Text->setText(QApplication::translate("adtest", "adc", 0));
    } // retranslateUi

};

namespace Ui {
    class adtest: public Ui_adtest {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADTEST_H
