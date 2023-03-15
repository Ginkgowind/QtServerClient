#ifndef SIGNUP_PAGE_H
#define SIGNUP_PAGE_H

#include "basepage.h"
#include <QWidget>

class QTcpSocket;

namespace Ui {
class Signup_page;
}

class Signup_page : public BasePage {
    Q_OBJECT

public:
    explicit Signup_page(QWidget* parent = nullptr);
    ~Signup_page();

    void getCode();
    void Signup();
    void gotoLogin();

private:
    Ui::Signup_page* ui;
    QTcpSocket* g_tcpSocket = nullptr;
};

#endif // SIGNUP_PAGE_H
