#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT
public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_pushButton_0_clicked();

    void on_pushButton_1_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pointbutton_clicked();

    void on_changeSignButton_clicked();

    void on_addbutton_clicked();

    void on_minusbutton_clicked();

    void on_multiplybutton_clicked();

    void on_dividebutton_clicked();

    void on_clearbutton_clicked();

    void on_squarebutton_clicked();

    void on_reciprocalbutton_clicked();

    void on_equalbutton_clicked();

private:
    Ui::Widget *ui;
    QString str1;//显示界面的字符串和存储数据
    QString str2;//存储两次输入数据
    QString result;//运算结果
    char Operator;//运算符
    bool op;
};

#endif // WIDGET_H;

