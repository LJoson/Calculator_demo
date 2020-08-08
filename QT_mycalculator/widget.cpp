#include "widget.h"
#include "ui_widget.h"
#include "math.h"
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    op=0;
    ui->lineEdit->clear();
    ui->lineEdit_result->clear();//初始化计算器
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_0_clicked()
{
    if(!op)
    {
        str1+="0";
    }
    else str2+="0";
    result+="0";
    ui->lineEdit->setText(result);//在界面上显示输入的数值
}

void Widget::on_pushButton_1_clicked()
{
    if(!op)
    {
        str1+="1";
    }
    else str2+="1";
    result+="1";
    ui->lineEdit->setText(result);//在界面上显示输入的数值
}

void Widget::on_pushButton_2_clicked()
{
    if(!op)
    {
        str1+="2";
    }
    else str2+="2";
    result+="2";
    ui->lineEdit->setText(result);//在界面上显示输入的数值
}

void Widget::on_pushButton_3_clicked()
{
    if(!op)
    {
        str1+="3";
    }
    else str2+="3";
    result+="3";
    ui->lineEdit->setText(result);//在界面上显示输入的数值
}

void Widget::on_pushButton_4_clicked()
{
    if(!op)
    {
        str1+="4";
    }
    else str2+="4";
    result+="4";
    ui->lineEdit->setText(result);//在界面上显示输入的数值
}

void Widget::on_pushButton_5_clicked()
{
    if(!op)
    {
        str1+="5";
    }
    else str2+="5";
    result+="5";
    ui->lineEdit->setText(result);//在界面上显示输入的数值
}

void Widget::on_pushButton_6_clicked()
{
    if(!op)
    {
        str1+="6";
    }
    else str2+="6";
    result+="6";
    ui->lineEdit->setText(result);//在界面上显示输入的数值
}

void Widget::on_pushButton_7_clicked()
{
    if(!op)
    {
        str1+="7";
    }
    else str2+="7";
    result+="7";
    ui->lineEdit->setText(result);//在界面上显示输入的数值
}

void Widget::on_pushButton_8_clicked()
{
    if(!op)
    {
        str1+="8";
    }
    else str2+="8";
    result+="8";
    ui->lineEdit->setText(result);//在界面上显示输入的数值
}

void Widget::on_pushButton_9_clicked()
{
    if(!op)
    {
        str1+="9";
    }
    else str2+="9";
    result+="9";
    ui->lineEdit->setText(result);//在界面上显示输入的数值值
}

void Widget::on_pointbutton_clicked()
{
    op=true;
    Operator='.';
    result+=".";
    ui->lineEdit->setText(result);
}

void Widget::on_changeSignButton_clicked()
{
    op=true;
    result = ui->lineEdit->text();
    double value = result.toDouble();
    if(value > 0.0)
        result =result.prepend("-");
    else
        if(value < 0.0)
            result  = result.remove(0,1);
    ui->lineEdit->setText(result);
}

void Widget::on_addbutton_clicked()
{
    op=true;
    Operator='+';
    result.append(Operator);
    ui->lineEdit->setText(result);
}

void Widget::on_minusbutton_clicked()
{
    op=true;
    Operator='-';
    result.append(Operator);
    ui->lineEdit->setText(result);
}

void Widget::on_multiplybutton_clicked()
{
    op=true;
    Operator='*';
    result.append(Operator);
    ui->lineEdit->setText(result);
}

void Widget::on_dividebutton_clicked()
{
    op=true;
    Operator='/';
    result.append(Operator);
    ui->lineEdit->setText(result);
}

void Widget::on_clearbutton_clicked()
{
    str1.clear();
    str2.clear();
    result.clear();//把输入的字符串清空
    op=false;
    ui->lineEdit->clear();//把输入栏清空
    ui->lineEdit_result->clear();//把输出栏清空
}

void Widget::on_squarebutton_clicked()
{
    op=true;
    double operand = ui->lineEdit->text().toDouble();
    //double result = 0.0;
    Operator ='S';
    if (operand < 0.0)
    {
        result="Error";
    }
    else {
        result = QString::number(std::sqrt(operand));
    }
    ui->lineEdit_result->setText(result);//在界面上输出结果
}

void Widget::on_reciprocalbutton_clicked()
{
    op=true;
    double operand = ui->lineEdit->text().toDouble();
    //double result = 0.0;
    Operator ='R';
    if (operand == 0.0)
    {
        result="Error";
    }
    else {
        result =QString::number(1.0 / operand);
    }
    ui->lineEdit_result->setText(result);//在界面上输出结果

}
void Widget::on_equalbutton_clicked()
{
    switch(Operator)
    {
    case '+':str1=QString::number(str1.toDouble()+str2.toDouble());
             result=str1;break;
    case '-':str1=QString::number(str1.toDouble()-str2.toDouble());
             result=str1;break;
    case '*':str1=QString::number(str1.toDouble()*str2.toDouble());
             result=str1;break;
    case '/':
        if(str2.toDouble()>= 0.000001)
           {
            str1=QString::number(str1.toDouble()/str2.toDouble());
            result=str1;
        }
        else
        {
        result="error";
        }break;
    default:break;
    }
    ui->lineEdit_result->setText(result);
    str2.clear();
}
