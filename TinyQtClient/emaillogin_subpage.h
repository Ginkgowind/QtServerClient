#ifndef EMAILLOGIN_SUBPAGE_H
#define EMAILLOGIN_SUBPAGE_H

#include <QTcpSocket>
#include <QWidget>
class Login_page;

namespace Ui {
class emailLogin_subPage;
}

class emailLogin_subPage : public QWidget {
    Q_OBJECT

public:
    explicit emailLogin_subPage(QWidget* parent = nullptr);
    ~emailLogin_subPage();

    void setLoginPage(Login_page* ptr);
    void Login();
    void getCode();
    void onReadyRead();

private:
    Ui::emailLogin_subPage* ui;
    Login_page* ptr_Login_page = nullptr;
    QTcpSocket* g_tcpSocket = nullptr;
};

#endif // EMAILLOGIN_SUBPAGE_H
