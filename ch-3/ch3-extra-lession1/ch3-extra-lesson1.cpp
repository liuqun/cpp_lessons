#include <iostream>
using namespace std;

int sum7s(int n)
{
    int sum;
    int i;

    sum = 0;
    for (i=7; i<=n; i+=7) {
        sum += i;
    }
    return sum;
}

int main()
{
    int n;
    cin >> n;
    cout << sum7s(n) << endl;
    return 0;
}

/*
 *
 * clearlove7问题
题目描述

编写函数sum7s(int n), 该函数的功能是求1到n之间（含n）所有7的倍数之和。若n小于7，则返回0。

输入描述

输入一个正整数

输出描述

输出一个正整数

样例输入

7
样例输出

7
*/
