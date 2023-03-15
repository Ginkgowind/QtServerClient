#ifndef USERCENTER_H
#define USERCENTER_H

#include "basepage.h"
#include <QWidget>

namespace Ui {
class User_page;
}

class User_page : public BasePage {
    Q_OBJECT

public:
    explicit User_page(BasePage* parent = nullptr);
    ~User_page();

    void setUserInfo(std::string recvdata);
    void onLogout();

private:
    Ui::User_page* ui;
};

#endif // USERCENTER_H
