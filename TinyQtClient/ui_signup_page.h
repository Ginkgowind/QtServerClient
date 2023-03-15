/********************************************************************************
** Form generated from reading UI file 'signup_page.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUP_PAGE_H
#define UI_SIGNUP_PAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Signup_page
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLineEdit *le_name;
    QLabel *label_5;
    QPushButton *btn_getcode;
    QLineEdit *le_password_2;
    QLineEdit *le_password;
    QLabel *label_4;
    QLineEdit *le_verifycode;
    QLineEdit *le_emailaddress;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_signup;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btn_gotologin;
    QPushButton *pushButton;
    QLabel *label;

    void setupUi(QWidget *Signup_page)
    {
        if (Signup_page->objectName().isEmpty())
            Signup_page->setObjectName(QString::fromUtf8("Signup_page"));
        Signup_page->resize(363, 375);
        layoutWidget = new QWidget(Signup_page);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 50, 331, 321));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font;
        font.setPointSize(15);
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        le_name = new QLineEdit(layoutWidget);
        le_name->setObjectName(QString::fromUtf8("le_name"));
        le_name->setFont(font);

        gridLayout->addWidget(le_name, 0, 1, 1, 1);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);

        gridLayout->addWidget(label_5, 2, 0, 1, 1);

        btn_getcode = new QPushButton(layoutWidget);
        btn_getcode->setObjectName(QString::fromUtf8("btn_getcode"));
        QFont font1;
        font1.setPointSize(12);
        btn_getcode->setFont(font1);

        gridLayout->addWidget(btn_getcode, 4, 1, 1, 1);

        le_password_2 = new QLineEdit(layoutWidget);
        le_password_2->setObjectName(QString::fromUtf8("le_password_2"));
        le_password_2->setFont(font);

        gridLayout->addWidget(le_password_2, 2, 1, 1, 1);

        le_password = new QLineEdit(layoutWidget);
        le_password->setObjectName(QString::fromUtf8("le_password"));
        le_password->setFont(font);

        gridLayout->addWidget(le_password, 1, 1, 1, 1);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        le_verifycode = new QLineEdit(layoutWidget);
        le_verifycode->setObjectName(QString::fromUtf8("le_verifycode"));
        le_verifycode->setFont(font);

        gridLayout->addWidget(le_verifycode, 4, 0, 1, 1);

        le_emailaddress = new QLineEdit(layoutWidget);
        le_emailaddress->setObjectName(QString::fromUtf8("le_emailaddress"));
        le_emailaddress->setFont(font);

        gridLayout->addWidget(le_emailaddress, 3, 1, 1, 1);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 1, 0, 1, 1);


        verticalLayout->addLayout(gridLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btn_signup = new QPushButton(layoutWidget);
        btn_signup->setObjectName(QString::fromUtf8("btn_signup"));
        btn_signup->setFont(font);

        horizontalLayout->addWidget(btn_signup);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        btn_gotologin = new QPushButton(layoutWidget);
        btn_gotologin->setObjectName(QString::fromUtf8("btn_gotologin"));
        btn_gotologin->setFont(font);

        horizontalLayout_2->addWidget(btn_gotologin);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setFont(font);

        horizontalLayout_2->addWidget(pushButton);


        verticalLayout_2->addLayout(horizontalLayout_2);

        label = new QLabel(Signup_page);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(120, 10, 131, 31));
        label->setFont(font);

        retranslateUi(Signup_page);

        QMetaObject::connectSlotsByName(Signup_page);
    } // setupUi

    void retranslateUi(QWidget *Signup_page)
    {
        Signup_page->setWindowTitle(QCoreApplication::translate("Signup_page", "Form", nullptr));
        label_2->setText(QCoreApplication::translate("Signup_page", "\347\224\250\346\210\267\345\220\215", nullptr));
        label_5->setText(QCoreApplication::translate("Signup_page", "\347\241\256\350\256\244\345\257\206\347\240\201", nullptr));
        btn_getcode->setText(QCoreApplication::translate("Signup_page", "\350\216\267\345\217\226\351\252\214\350\257\201\347\240\201", nullptr));
        label_4->setText(QCoreApplication::translate("Signup_page", "\351\202\256\347\256\261", nullptr));
        label_3->setText(QCoreApplication::translate("Signup_page", "\345\257\206\347\240\201", nullptr));
        btn_signup->setText(QCoreApplication::translate("Signup_page", "\346\263\250\345\206\214", nullptr));
        btn_gotologin->setText(QCoreApplication::translate("Signup_page", "\350\277\224\345\233\236\347\231\273\345\275\225\347\225\214\351\235\242", nullptr));
        pushButton->setText(QCoreApplication::translate("Signup_page", "\345\276\256\344\277\241\346\211\253\347\240\201\346\263\250\345\206\214", nullptr));
        label->setText(QCoreApplication::translate("Signup_page", "*\346\263\250\345\206\214\347\225\214\351\235\242*", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Signup_page: public Ui_Signup_page {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_PAGE_H
