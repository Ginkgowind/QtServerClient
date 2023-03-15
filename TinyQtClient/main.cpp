#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}

//#include <QApplication>
//#include <QStackedWidget>
//#include <QPushButton>

//int main(int argc, char *argv[])
//{
//    QApplication a(argc, argv);



//    QStackedWidget stackedWidget;

//    // 创建两个页面
//    QPushButton *page1 = new QPushButton("Page 1");
//    QPushButton *page2 = new QPushButton("Page 2");

//    // 将页面添加到QStackedWidget中
//    stackedWidget.addWidget(page1);
//    stackedWidget.addWidget(page2);

//    // 显示第一个页面
//    stackedWidget.setCurrentWidget(page1);

//    // 切换到第二个页面
//    page2->connect(page2, &QPushButton::clicked, [page1,&stackedWidget](){
//        stackedWidget.setCurrentWidget(page1);
//    });

//    // 切换回第一个页面
//    page1->connect(page1, &QPushButton::clicked, [page2,&stackedWidget](){
//        stackedWidget.setCurrentWidget(page2);
//    });

//    stackedWidget.show();
//    return a.exec();
//}
