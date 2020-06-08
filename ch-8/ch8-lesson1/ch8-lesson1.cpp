//#include <cstdio>
//#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;

class Complex{
public:
    Complex(double r = 0.0, double i = 0.0): real(r), imag(i) {};
    Complex operator+ (const Complex &c2) const;
    Complex operator- (const Complex &c2) const;
    Complex operator* (const Complex &c2) const;
    Complex operator/ (const Complex &c2) const;
    friend ostream & operator<< (std::ostream &out, const Complex &c);
private:
    double real;
    double imag;
};

Complex Complex::operator+ (const Complex &c2) const
{
    return Complex(real + c2.real, imag + c2.imag);
}

Complex Complex::operator- (const Complex &c2) const
{
    return Complex(real - c2.real, imag - c2.imag);
}

Complex Complex::operator*(const Complex &that) const
{
    const double& a=this->real;
    const double& b=this->imag;
    const double& c=that.real;
    const double& d=that.imag;

    return Complex(a*c-b*d, b*c+a*d);
}

Complex Complex::operator/(const Complex &that) const
{
    const double& a=this->real;
    const double& b=this->imag;
    const double& c=that.real;
    const double& d=that.imag;

    return Complex((a*c+b*d)/(c*c+d*d),
                   (b*c-a*d)/(c*c+d*d));
}


ostream & operator<<(ostream &out, const Complex &c)
{
    out << c.real << " " << c.imag;
    return out;
}

int main() {
    double real, imag;
    cin >> real >> imag;
    Complex c1(real, imag);
    cin >> real >> imag;
    Complex c2(real, imag);
    cout << c1 + c2 << endl;
    cout << c1 - c2 << endl;
    cout << c1 * c2 << endl;
    cout << c1 / c2 << endl;
}


/*
题目描述

求两个复数的加减乘除。

输入描述

第一行两个double类型数，表示第一个复数的实部虚部

第二行两个double类型数，表示第二个复数的实部虚部

输出描述

输出依次计算两个复数的加减乘除，一行一个结果

输出复数先输出实部，空格，然后是虚部，

样例输入

1 1
3 -1
样例输出

4 0

-2 2

4 2

0.2 0.4

*/
