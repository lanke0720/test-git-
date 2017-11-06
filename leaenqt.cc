lude "mainwindow.h"
#include <QApplication>
#include <QLabel>
#include <QPushButton>
#include <QHBoxLayout>
#include <QSlider>
#include <QSpinBox>
int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    //1
    //    //用来管理整个应用程序所用到的资源。构造函数需要两个参数，分别为。。。，因为QT支持它自己的一些命令行参数。
    //        //QLabel label("<h2><i>hello,world</i>");
    //            //label.show();
    //            //2
    //            //    QPushButton *button = new QPushButton("Quit!");
    //            //    QObject::connect(button,SIGNAL(clicked()),&app,SLOT(quit()));
    //            //    button->show();  //then signal
    //
    //                //3
    //                    QWidget *window = new QWidget;  //创建窗口对象
    //                        window->setWindowTitle("Enter your Age"); //用这个函数显示在窗口标题栏的文字。
    //
    //                            QSpinBox *spinBox = new QSpinBox;
    //                                QSlider *slider = new QSlider(Qt::Horizontal);
    //                                    spinBox->setRange(0,130);
    //                                        slider->setRange(0,130);
    //
    //                                            QObject::connect(spinBox, SIGNAL(valueChanged(int)),slider,SLOT(setValue(int)));
    //                                                QObject::connect(slider, SIGNAL(valueChanged(int)),spinBox,SLOT(setValue(int)));//调用两次同步
    //
    //                                                    spinBox->setValue(35);
    //
    //                                                        QHBoxLayout *layout = new QHBoxLayout;  //使用一个布局管理器（layout manager）对微调框 和 滑块进行布局处理。
    //                                                            layout->addWidget(spinBox);
    //                                                                layout->addWidget(slider);
    //                                                                    window->setLayout(layout);
    //
    //                                                                        window->show();
    //                                                                            return app.exec();
    //                                                                            }
    //
