#include "pwlogin_subpage.h"
#include "ui_pwlogin_subpage.h"
#include "nlohmann/json.hpp"
#include "common.h"
#include "basepage.h"
#include <QTcpSocket>
#include "login_page.h"
#include "ConnectionManager.h"
#include <QMessageBox>

using json = nlohmann::json;

PwLogin_subPage::PwLogin_subPage(QWidget*parent) :
    QWidget(parent),
    ui(new Ui::PwLogin_subPage)
{
    ui->setupUi(this);

    g_tcpSocket = GETSOCKET();

    connect(ui->btn_passwordlogin, &QPushButton::clicked, this, &PwLogin_subPage::Login);
    connect(g_tcpSocket, &QTcpSocket::readyRead, this, &PwLogin_subPage::onReadyRead);
}

PwLogin_subPage::~PwLogin_subPage()
{
    delete ui;

    g_tcpSocket = nullptr;
}

void PwLogin_subPage::Login()
{
    SERVERCONNECT();

    json j;
    j["method"] = LOGIN;
    j["login_method"] = "password";
    j["uid"] = ui->lt_uid->text().toStdString();
    j["password"] = ui->lt_password->text().toStdString();

    g_tcpSocket->write(j.dump().c_str());
    g_tcpSocket->flush();
}

void PwLogin_subPage::setLoginPage(Login_page* ptr)
{
    ptr_Login_page = ptr;
}

void PwLogin_subPage::onReadyRead()
{
    QByteArray byteArray= g_tcpSocket->readAll();
    std::string recvdata = byteArray.constData();
    //if (recvdata == "") return;

    json j = json::parse(recvdata);

    switch (REPONSE_RET(j["ret"])) {
    case NO_USER:
        QMessageBox::critical(nullptr, "错误提示", "没有此用户！");
        break;
    case LOGIN_OK:
        // 为什么如下使用方式会报错？
        // emit dynamic_cast<BasePage*>(parent())->jumpToPage(USER_PAGE);
        emit ptr_Login_page->jumpToPage(USER_PAGE);
        emit ptr_Login_page->dataReady(recvdata);
        QMessageBox::information(nullptr, "操作提示", "登录成功。");
        break;
    case PASSWD_WRONG:
        QMessageBox::critical(nullptr, "错误提示", "密码错误！");
        break;
    case EMAIL_CHANGED:
        QMessageBox::critical(nullptr, "错误提示", "邮箱与输入验证码时的不同！");
        break;
    case EMAIL_SENT:
        QMessageBox::information(nullptr, "操作提示", "验证码邮件发送成功。");
        break;
    case VERIFYCODE_WRONG:
        QMessageBox::critical(nullptr, "错误提示", "验证码错误！");
        break;
    case SIGNUP_OK:
        QMessageBox::information(nullptr, "操作提示", "注册成功。");
        break;
    case EMAIL_ILLEGAL:
        QMessageBox::critical(nullptr, "错误提示", "邮箱不合法（可能已被使用）！");
        break;
    case MESSAGE_ERROR:
        QMessageBox::critical(nullptr, "错误提示", "发送数据格式有误！");
        break;
    }
}
