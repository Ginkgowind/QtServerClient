/********************************************************************************
** Form generated from reading UI file 'pwlogin_subpage.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PWLOGIN_SUBPAGE_H
#define UI_PWLOGIN_SUBPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PwLogin_subPage
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLineEdit *lt_password;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *btn_passwordlogin;
    QLabel *label_4;
    QLineEdit *lt_uid;

    void setupUi(QWidget *PwLogin_subPage)
    {
        if (PwLogin_subPage->objectName().isEmpty())
            PwLogin_subPage->setObjectName(QString::fromUtf8("PwLogin_subPage"));
        PwLogin_subPage->resize(270, 135);
        verticalLayout = new QVBoxLayout(PwLogin_subPage);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lt_password = new QLineEdit(PwLogin_subPage);
        lt_password->setObjectName(QString::fromUtf8("lt_password"));
        QFont font;
        font.setPointSize(12);
        lt_password->setFont(font);

        gridLayout->addWidget(lt_password, 1, 1, 1, 2);

        label_2 = new QLabel(PwLogin_subPage);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font1;
        font1.setPointSize(15);
        label_2->setFont(font1);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        label_3 = new QLabel(PwLogin_subPage);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font1);

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        btn_passwordlogin = new QPushButton(PwLogin_subPage);
        btn_passwordlogin->setObjectName(QString::fromUtf8("btn_passwordlogin"));
        btn_passwordlogin->setFont(font1);

        gridLayout->addWidget(btn_passwordlogin, 2, 2, 1, 1);

        label_4 = new QLabel(PwLogin_subPage);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        gridLayout->addWidget(label_4, 2, 0, 1, 2);

        lt_uid = new QLineEdit(PwLogin_subPage);
        lt_uid->setObjectName(QString::fromUtf8("lt_uid"));
        lt_uid->setFont(font);

        gridLayout->addWidget(lt_uid, 0, 1, 1, 2);


        verticalLayout->addLayout(gridLayout);


        retranslateUi(PwLogin_subPage);

        QMetaObject::connectSlotsByName(PwLogin_subPage);
    } // setupUi

    void retranslateUi(QWidget *PwLogin_subPage)
    {
        PwLogin_subPage->setWindowTitle(QCoreApplication::translate("PwLogin_subPage", "Form", nullptr));
        label_2->setText(QCoreApplication::translate("PwLogin_subPage", "UID", nullptr));
        label_3->setText(QCoreApplication::translate("PwLogin_subPage", "\345\257\206\347\240\201", nullptr));
        btn_passwordlogin->setText(QCoreApplication::translate("PwLogin_subPage", "\347\231\273\345\275\225", nullptr));
        label_4->setText(QCoreApplication::translate("PwLogin_subPage", "UID\345\257\206\347\240\201\347\231\273\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PwLogin_subPage: public Ui_PwLogin_subPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PWLOGIN_SUBPAGE_H
