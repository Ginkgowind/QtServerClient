#include "mainwindow.h"
#include "basepage.h"
#include "login_page.h"
#include "signup_page.h"
#include "ui_mainwindow.h"
#include "user_page.h"
#include "ConnectionManager.h"
#include <QDebug>
#include <QHostAddress>
#include <QStackedWidget>
#include <QTcpSocket>

MainWindow::MainWindow(QWidget* parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    resize(420, 600);

    m_stackedWidget = new QStackedWidget(this);
    setCentralWidget(m_stackedWidget);

    m_login_page = new Login_page();
    m_signup_page = new Signup_page();
    m_user_page = new User_page();
    m_stackedWidget->addWidget(m_login_page);
    m_stackedWidget->addWidget(m_signup_page);
    m_stackedWidget->addWidget(m_user_page);

    m_stackedWidget->setCurrentWidget(m_login_page);
    //    ui->stackedWidget->setCurrentWidget(m_login_page);

    connect(m_login_page, &BasePage::jumpToPage, this, &MainWindow::switch_page);
    connect(m_signup_page, &BasePage::jumpToPage, this, &MainWindow::switch_page);
    connect(m_user_page, &BasePage::jumpToPage, this, &MainWindow::switch_page);

    connect(m_login_page, &BasePage::dataReady, m_user_page, &User_page::setUserInfo);
}

MainWindow::~MainWindow()
{
    delete ui;

    SERVERDISCONNECT();
}

void MainWindow::switch_page(int pageindex)
{
    //qDebug() << "切换页面：" << pageindex;
    //    pageindex = 1;
    m_stackedWidget->setCurrentIndex(pageindex);
}
