#ifndef LOGIN_PAGE_H
#define LOGIN_PAGE_H

#include "basepage.h"
#include <QWidget>

class PwLogin_subPage;
class emailLogin_subPage;

namespace Ui {
class Login_page;
}

class Login_page : public BasePage {
    Q_OBJECT

public:
    explicit Login_page(QWidget* parent = nullptr);
    ~Login_page();

    void gotoSignup();
    void switchLoginMethod();

private:
    Ui::Login_page* ui;
    PwLogin_subPage* pwloginPage = nullptr;
    emailLogin_subPage* emailloginPage = nullptr;

};

#endif // LOGIN_PAGE_H
