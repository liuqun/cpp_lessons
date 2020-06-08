#include <cstdio>
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

enum shape {CIRCLE=0, TRIANGLE=1, RECTANGLE=2};

class Shape
{
public:
    Shape(){};
    virtual void showArea() = 0;
};

class Circle:public Shape
{
public:
    Circle(double r)
    {
        radius = r;
    }
    //补充该函数
    void showArea()
    {
        double s = 3.14 * this->radius * this->radius;
        printf("%.2f\n", s);
    }
private:
    double radius;
};

class Triangle:public Shape
{
public:
    Triangle(double a1,double b1,double c1)
    {
        a = a1;
        b = b1;
        c = c1;
    }
    //补充该函数
    void showArea()
    {
        double p;
        double s;

        p = (a+b+c)/2;
        s = sqrt(p*(p-a)*(p-b)*(p-c));
        printf("%.2f\n", s);
    }
private:
    double a, b, c;
};

class Rectangle:public Shape
{
public:
    Rectangle(double x, double y)
    {
        width = x;
        height = y;
    }
    //补充该函数
    void showArea()
    {
        double s = this->width * this->height;
        printf("%.2f\n", s);
    }
private:
    double width, height;
};

//补充该函数
void calArea(Shape* ptr){
    ptr->showArea();
}

void init()
{
    //浮点输出初始化
    //cout.setf(std::ios::fixed);
    //cout << std::setprecision(2);
    cout << std::setiosflags(ios::fixed)
         << std::setprecision(2);
}

int main()
{
    init();

    int type;
    cin >> type;


    if (type == CIRCLE) {
        double r;
        cin >> r;
        Circle circle(r);
        calArea(&circle);
    }
    else if (type == TRIANGLE) {
        double a, b, c;
        cin >> a >> b >> c;
        Triangle triangle(a, b, c);
        calArea(&triangle);
    }
    else {
        double x, y;
        cin >> x >> y;
        Rectangle rectangle(x, y);
        calArea(&rectangle);
    }
}
