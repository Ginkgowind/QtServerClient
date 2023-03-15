#ifndef PWLOGIN_SUBPAGE_H
#define PWLOGIN_SUBPAGE_H

#include <QWidget>
#include <string>

class BasePage;
class Login_page;
class QTcpSocket;

namespace Ui {
class PwLogin_subPage;
}

class PwLogin_subPage : public QWidget {
    Q_OBJECT

public:
    explicit PwLogin_subPage(QWidget* parent = nullptr);
    //PwLogin_subPage(BasePage* parent, Login_page *ptr_Login_page);
    //explicit PwLogin_subPage(BasePage* parent = nullptr);
    ~PwLogin_subPage();

    void setLoginPage(Login_page* ptr);
    void Login();
    void onReadyRead();
    

private:
    Ui::PwLogin_subPage* ui;
    Login_page* ptr_Login_page = nullptr;
    QTcpSocket* g_tcpSocket = nullptr;
};

#endif // PWLOGIN_SUBPAGE_H
