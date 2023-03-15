#include "signup_page.h"
#include "common.h"
#include "ui_signup_page.h"
#include "ConnectionManager.h"
#include <QMessageBox>
#include <QTcpSocket>

Signup_page::Signup_page(QWidget* parent)
    : BasePage(parent)
    , ui(new Ui::Signup_page)
{
    ui->setupUi(this);

    g_tcpSocket = GETSOCKET();

    connect(ui->btn_getcode, &QPushButton::clicked, this, &Signup_page::getCode);
    connect(ui->btn_signup, &QPushButton::clicked, this, &Signup_page::Signup);
    connect(ui->btn_gotologin, &QPushButton::clicked, this, &Signup_page::gotoLogin);
}

Signup_page::~Signup_page()
{
    delete ui;

    g_tcpSocket = nullptr;
}

void Signup_page::getCode()
{
    if (ui->le_password->text() != ui->le_password_2->text()) {
        QMessageBox::critical(nullptr, "错误提示", "两次密码输入不一致！");
    }

    SERVERCONNECT();

    json j;
    j["method"] = SENDEMAIL;
    j["use"] = "signup";
    j["emailaddress"] = ui->le_emailaddress->text().toStdString();

    g_tcpSocket->write(j.dump().c_str());
    g_tcpSocket->flush();
}

void Signup_page::Signup()
{
    if (ui->le_password->text() != ui->le_password_2->text()) {
        QMessageBox::critical(nullptr, "错误提示", "两次密码输入不一致！");
    }

    SERVERCONNECT();

    json j;
    j["method"] = SIGNUP;
    j["signup_method"] = "normal";
    j["name"]=ui->le_name->text().toStdString();
    j["password"]=ui->le_password->text().toStdString();
    j["emailaddress"] = ui->le_emailaddress->text().toStdString();
    j["verifycode"]=ui->le_verifycode->text().toInt();

    g_tcpSocket->write(j.dump().c_str());
    g_tcpSocket->flush();
}

void Signup_page::gotoLogin()
{
    emit jumpToPage(LOGIN_PAGE);
}
