#include "user_page.h"
#include "common.h"
#include "ui_user_page.h"

using namespace ns;

User_page::User_page(BasePage* parent)
    : BasePage(parent)
    , ui(new Ui::User_page)
{
    ui->setupUi(this);

    connect(ui->btn_logout, &QPushButton::clicked, this, &User_page::onLogout);
}

User_page::~User_page()
{
    delete ui;
}

void User_page::setUserInfo(std::string recvdata)
{
    userinfo data = json::parse(recvdata)["userinfo"];
    ui->lb_uid->setText(data.uid.c_str());
    ui->lb_name->setText(data.name.c_str());
    ui->lb_email->setText(data.emailaddress.c_str());
}

void User_page::onLogout()
{
    // 清除用户数据

    // 回到主界面
    emit jumpToPage(LOGIN_PAGE);
}
