#ifndef BASEPAGE_H
#define BASEPAGE_H

#include <QWidget>
#include <string>

class BasePage : public QWidget {
    Q_OBJECT
public:
    explicit BasePage(QWidget* parent = nullptr);

signals:
    void jumpToPage(int pageIndex);
    void dataReady(std::string recvdata);
};

#endif // BASEPAGE_H
