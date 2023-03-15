/********************************************************************************
** Form generated from reading UI file 'login_page.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_PAGE_H
#define UI_LOGIN_PAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login_page
{
public:
    QPushButton *btn_gotosignup;
    QPlainTextEdit *pte_debuginfo;
    QLabel *label;
    QPushButton *btn_switchMethod;
    QStackedWidget *sw_loginsubpage;
    QWidget *page;
    QWidget *page_2;

    void setupUi(QWidget *Login_page)
    {
        if (Login_page->objectName().isEmpty())
            Login_page->setObjectName(QString::fromUtf8("Login_page"));
        Login_page->resize(410, 513);
        btn_gotosignup = new QPushButton(Login_page);
        btn_gotosignup->setObjectName(QString::fromUtf8("btn_gotosignup"));
        btn_gotosignup->setGeometry(QRect(240, 220, 93, 34));
        QFont font;
        font.setPointSize(15);
        btn_gotosignup->setFont(font);
        pte_debuginfo = new QPlainTextEdit(Login_page);
        pte_debuginfo->setObjectName(QString::fromUtf8("pte_debuginfo"));
        pte_debuginfo->setGeometry(QRect(10, 270, 387, 221));
        label = new QLabel(Login_page);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 10, 299, 25));
        label->setFont(font);
        btn_switchMethod = new QPushButton(Login_page);
        btn_switchMethod->setObjectName(QString::fromUtf8("btn_switchMethod"));
        btn_switchMethod->setGeometry(QRect(40, 220, 161, 34));
        btn_switchMethod->setFont(font);
        sw_loginsubpage = new QStackedWidget(Login_page);
        sw_loginsubpage->setObjectName(QString::fromUtf8("sw_loginsubpage"));
        sw_loginsubpage->setGeometry(QRect(20, 60, 371, 141));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        sw_loginsubpage->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        sw_loginsubpage->addWidget(page_2);

        retranslateUi(Login_page);

        QMetaObject::connectSlotsByName(Login_page);
    } // setupUi

    void retranslateUi(QWidget *Login_page)
    {
        Login_page->setWindowTitle(QCoreApplication::translate("Login_page", "Form", nullptr));
        btn_gotosignup->setText(QCoreApplication::translate("Login_page", "\346\263\250\345\206\214", nullptr));
        label->setText(QCoreApplication::translate("Login_page", "Welcome to TinyQtClient", nullptr));
        btn_switchMethod->setText(QCoreApplication::translate("Login_page", "\344\275\277\347\224\250\351\202\256\347\256\261\347\231\273\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login_page: public Ui_Login_page {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_PAGE_H
