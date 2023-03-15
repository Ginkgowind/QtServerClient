/********************************************************************************
** Form generated from reading UI file 'user_page.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USER_PAGE_H
#define UI_USER_PAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_User_page
{
public:
    QLabel *label;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *lb1;
    QLabel *lb_uid;
    QLabel *lb2;
    QLabel *lb_name;
    QLabel *lb3;
    QLabel *lb_email;
    QPushButton *btn_logout;

    void setupUi(QWidget *User_page)
    {
        if (User_page->objectName().isEmpty())
            User_page->setObjectName(QString::fromUtf8("User_page"));
        User_page->resize(400, 300);
        label = new QLabel(User_page);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(130, 10, 161, 51));
        QFont font;
        font.setPointSize(24);
        label->setFont(font);
        layoutWidget = new QWidget(User_page);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(90, 90, 226, 101));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        lb1 = new QLabel(layoutWidget);
        lb1->setObjectName(QString::fromUtf8("lb1"));
        QFont font1;
        font1.setPointSize(15);
        lb1->setFont(font1);

        gridLayout->addWidget(lb1, 0, 0, 1, 1);

        lb_uid = new QLabel(layoutWidget);
        lb_uid->setObjectName(QString::fromUtf8("lb_uid"));
        lb_uid->setFont(font1);

        gridLayout->addWidget(lb_uid, 0, 1, 1, 1);

        lb2 = new QLabel(layoutWidget);
        lb2->setObjectName(QString::fromUtf8("lb2"));
        lb2->setFont(font1);

        gridLayout->addWidget(lb2, 1, 0, 1, 1);

        lb_name = new QLabel(layoutWidget);
        lb_name->setObjectName(QString::fromUtf8("lb_name"));
        lb_name->setFont(font1);

        gridLayout->addWidget(lb_name, 1, 1, 1, 1);

        lb3 = new QLabel(layoutWidget);
        lb3->setObjectName(QString::fromUtf8("lb3"));
        lb3->setFont(font1);

        gridLayout->addWidget(lb3, 2, 0, 1, 1);

        lb_email = new QLabel(layoutWidget);
        lb_email->setObjectName(QString::fromUtf8("lb_email"));
        lb_email->setFont(font1);

        gridLayout->addWidget(lb_email, 2, 1, 1, 1);

        btn_logout = new QPushButton(User_page);
        btn_logout->setObjectName(QString::fromUtf8("btn_logout"));
        btn_logout->setGeometry(QRect(220, 240, 93, 28));

        retranslateUi(User_page);

        QMetaObject::connectSlotsByName(User_page);
    } // setupUi

    void retranslateUi(QWidget *User_page)
    {
        User_page->setWindowTitle(QCoreApplication::translate("User_page", "Form", nullptr));
        label->setText(QCoreApplication::translate("User_page", "\344\270\252\344\272\272\344\270\255\345\277\203", nullptr));
        lb1->setText(QCoreApplication::translate("User_page", "UID", nullptr));
        lb_uid->setText(QCoreApplication::translate("User_page", "***", nullptr));
        lb2->setText(QCoreApplication::translate("User_page", "\347\224\250\346\210\267\345\220\215", nullptr));
        lb_name->setText(QCoreApplication::translate("User_page", "******", nullptr));
        lb3->setText(QCoreApplication::translate("User_page", "\351\202\256\347\256\261", nullptr));
        lb_email->setText(QCoreApplication::translate("User_page", "***********", nullptr));
        btn_logout->setText(QCoreApplication::translate("User_page", "\351\200\200\345\207\272\347\231\273\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class User_page: public Ui_User_page {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_PAGE_H
