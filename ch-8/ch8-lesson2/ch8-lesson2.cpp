#include <iostream>
using namespace std;

const double pi = 3.14;
class Shape{
public:
    Shape(){}
    ~Shape(){}
    virtual double getArea() = 0;
    virtual double getPerim() = 0;
};

class Circle: public Shape{
public:
    Circle(double rad):radius(rad){}
    ~Circle(){}

    /*补充这两个函数*/
    double getArea() override;
    double getPerim() override;
private:
    double radius;
};

int main() {
    double radius;
    cin >> radius;
    Circle c(radius);
    cout << c.getArea() << " " << c.getPerim() << endl;
}

double Circle::getArea()
{
    return pi*radius*radius;
}

double Circle::getPerim()
{
    return 2.0*pi*radius;
}


/*

圆的周长和面积
题目描述

求圆的周长和面积，已知圆类从shape抽象类继承。

输入描述

输入圆的半径

输出描述

输出圆的周长和面积

样例输入

10
样例输出

314 62.8
*/
