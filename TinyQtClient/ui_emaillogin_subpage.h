/********************************************************************************
** Form generated from reading UI file 'emaillogin_subpage.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EMAILLOGIN_SUBPAGE_H
#define UI_EMAILLOGIN_SUBPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_emailLogin_subPage
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_2;
    QLabel *label_5;
    QLineEdit *lt_emailaddress;
    QLineEdit *lt_verifycode;
    QPushButton *btn_getcode;
    QLabel *label_7;
    QPushButton *btn_emaillogin;

    void setupUi(QWidget *emailLogin_subPage)
    {
        if (emailLogin_subPage->objectName().isEmpty())
            emailLogin_subPage->setObjectName(QString::fromUtf8("emailLogin_subPage"));
        emailLogin_subPage->resize(270, 135);
        verticalLayout = new QVBoxLayout(emailLogin_subPage);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_5 = new QLabel(emailLogin_subPage);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        QFont font;
        font.setPointSize(15);
        label_5->setFont(font);

        gridLayout_2->addWidget(label_5, 0, 0, 1, 1);

        lt_emailaddress = new QLineEdit(emailLogin_subPage);
        lt_emailaddress->setObjectName(QString::fromUtf8("lt_emailaddress"));
        QFont font1;
        font1.setPointSize(12);
        lt_emailaddress->setFont(font1);

        gridLayout_2->addWidget(lt_emailaddress, 0, 1, 1, 3);

        lt_verifycode = new QLineEdit(emailLogin_subPage);
        lt_verifycode->setObjectName(QString::fromUtf8("lt_verifycode"));
        lt_verifycode->setFont(font1);

        gridLayout_2->addWidget(lt_verifycode, 1, 0, 1, 2);

        btn_getcode = new QPushButton(emailLogin_subPage);
        btn_getcode->setObjectName(QString::fromUtf8("btn_getcode"));
        btn_getcode->setFont(font);

        gridLayout_2->addWidget(btn_getcode, 1, 2, 1, 2);

        label_7 = new QLabel(emailLogin_subPage);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font1);

        gridLayout_2->addWidget(label_7, 2, 0, 1, 3);

        btn_emaillogin = new QPushButton(emailLogin_subPage);
        btn_emaillogin->setObjectName(QString::fromUtf8("btn_emaillogin"));
        btn_emaillogin->setFont(font);

        gridLayout_2->addWidget(btn_emaillogin, 2, 3, 1, 1);


        verticalLayout->addLayout(gridLayout_2);


        retranslateUi(emailLogin_subPage);

        QMetaObject::connectSlotsByName(emailLogin_subPage);
    } // setupUi

    void retranslateUi(QWidget *emailLogin_subPage)
    {
        emailLogin_subPage->setWindowTitle(QCoreApplication::translate("emailLogin_subPage", "Form", nullptr));
        label_5->setText(QCoreApplication::translate("emailLogin_subPage", "\351\202\256\347\256\261", nullptr));
        btn_getcode->setText(QCoreApplication::translate("emailLogin_subPage", "\350\216\267\345\217\226\351\252\214\350\257\201\347\240\201", nullptr));
        label_7->setText(QCoreApplication::translate("emailLogin_subPage", "\351\202\256\347\256\261\351\252\214\350\257\201\347\240\201\347\231\273\345\275\225", nullptr));
        btn_emaillogin->setText(QCoreApplication::translate("emailLogin_subPage", "\347\231\273\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class emailLogin_subPage: public Ui_emailLogin_subPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMAILLOGIN_SUBPAGE_H
