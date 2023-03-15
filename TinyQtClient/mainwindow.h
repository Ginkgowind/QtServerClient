#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
class QTcpSocket;
class QStackedWidget;
class Login_page;
class User_page;
class Signup_page;

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    MainWindow(QWidget* parent = nullptr);
    ~MainWindow();

    void switch_page(int pageindex);

private:
    Ui::MainWindow* ui;

    QStackedWidget* m_stackedWidget = nullptr;

    Login_page* m_login_page = nullptr;
    Signup_page* m_signup_page = nullptr;
    User_page* m_user_page = nullptr;
};
#endif // MAINWINDOW_H
