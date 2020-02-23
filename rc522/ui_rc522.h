/********************************************************************************
** Form generated from reading UI file 'rc522.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RC522_H
#define UI_RC522_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_rc522
{
public:
    QLineEdit *id_Edit;
    QLabel *label;

    void setupUi(QDialog *rc522)
    {
        if (rc522->objectName().isEmpty())
            rc522->setObjectName(QStringLiteral("rc522"));
        rc522->resize(400, 300);
        id_Edit = new QLineEdit(rc522);
        id_Edit->setObjectName(QStringLiteral("id_Edit"));
        id_Edit->setGeometry(QRect(60, 110, 231, 31));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(id_Edit->sizePolicy().hasHeightForWidth());
        id_Edit->setSizePolicy(sizePolicy);
        label = new QLabel(rc522);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 90, 271, 16));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);

        retranslateUi(rc522);

        QMetaObject::connectSlotsByName(rc522);
    } // setupUi

    void retranslateUi(QDialog *rc522)
    {
        rc522->setWindowTitle(QApplication::translate("rc522", "rc522", 0));
        label->setText(QApplication::translate("rc522", "PLEASE SWIPE YOUR CARD", 0));
    } // retranslateUi

};

namespace Ui {
    class rc522: public Ui_rc522 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RC522_H
