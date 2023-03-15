#include "login_page.h"
#include "common.h"
#include "nlohmann/json.hpp"
#include "ui_login_page.h"
//#include "basepage.h"
#include <QHostAddress>
#include "pwlogin_subpage.h"
#include "emaillogin_subpage.h"

using json = nlohmann::json;
#define hanzi(x) QString::fromLocal8Bit(x);

Login_page::Login_page(QWidget* parent)
    : BasePage(parent)
    , ui(new Ui::Login_page)
{
    ui->setupUi(this);

    pwloginPage = new PwLogin_subPage(this);
    pwloginPage->setLoginPage(this);
    emailloginPage = new emailLogin_subPage(this);
    emailloginPage->setLoginPage(this);
    ui->sw_loginsubpage->addWidget(pwloginPage);
    ui->sw_loginsubpage->addWidget(emailloginPage);
    ui->sw_loginsubpage->setCurrentWidget(pwloginPage);

    connect(ui->btn_gotosignup, &QPushButton::clicked, this,
        &Login_page::gotoSignup);
    connect(ui->btn_switchMethod, &QPushButton::clicked, this,
        &Login_page::switchLoginMethod);

}

Login_page::~Login_page() { delete ui; }

void Login_page::gotoSignup()
{
    emit this->jumpToPage(SIGNUP_PAGE);
}

void Login_page::switchLoginMethod()
{
    static bool bisPassword = true;
    bisPassword = !bisPassword;

    ui->sw_loginsubpage->setCurrentWidget(bisPassword? (QWidget*)pwloginPage : (QWidget*)emailloginPage);
    ui->btn_switchMethod->setText(bisPassword ?
        QString::fromLocal8Bit("UIDÃÜÂëµÇÂ¼") : QString::fromLocal8Bit("ÓÊÏäÑéÖ¤ÂëµÇÂ¼"));
        //hanzi("UIDÃÜÂëµÇÂ¼") : hanzi("ÓÊÏäÑéÖ¤ÂëµÇÂ¼"));
}


