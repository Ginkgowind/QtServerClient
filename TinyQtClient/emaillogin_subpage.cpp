#include "emaillogin_subpage.h"
#include "ui_emaillogin_subpage.h"
#include "nlohmann/json.hpp"
#include "common.h"
#include "basepage.h"
#include "login_page.h"
#include "ConnectionManager.h"

using json = nlohmann::json;

emailLogin_subPage::emailLogin_subPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::emailLogin_subPage)
{
    ui->setupUi(this);

    g_tcpSocket = GETSOCKET();

    connect(ui->btn_emaillogin, &QPushButton::clicked, this, &emailLogin_subPage::Login);
    connect(ui->btn_getcode, &QPushButton::clicked, this, &emailLogin_subPage::getCode);
    connect(g_tcpSocket, &QTcpSocket::readyRead, this, &emailLogin_subPage::onReadyRead);
}

emailLogin_subPage::~emailLogin_subPage()
{
    delete ui;

    g_tcpSocket = nullptr;
}

void emailLogin_subPage::Login()
{
    SERVERCONNECT();

    json j;
    j["method"] = LOGIN;
    j["login_method"] = "email";
    j["emailaddress"] = ui->lt_emailaddress->text().toStdString();
    j["verifycode"] = ui->lt_verifycode->text().toInt();
    g_tcpSocket->write(j.dump().c_str());
    g_tcpSocket->flush();
}

void emailLogin_subPage::setLoginPage(Login_page* ptr)
{
    ptr_Login_page = ptr;
}

void emailLogin_subPage::getCode()
{
    SERVERCONNECT();

    json j;
    j["method"] = SENDEMAIL;
    j["use"] = "login";
    j["emailaddress"] = ui->lt_emailaddress->text().toStdString();
    g_tcpSocket->write(j.dump().c_str());
    g_tcpSocket->flush();
}

void emailLogin_subPage::onReadyRead()
{
    QByteArray byteArray = g_tcpSocket->readAll();
    std::string recvdata = byteArray.constData();
    if (recvdata == "") return;

    json j = json::parse(recvdata);
    if (j["ret"] == LOGIN_OK) {
        // 为什么如下使用方式会报错？
        // emit dynamic_cast<BasePage*>(parent())->jumpToPage(USER_PAGE);
        emit ptr_Login_page->jumpToPage(USER_PAGE);
        emit ptr_Login_page->dataReady(recvdata);
    }
}