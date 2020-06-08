#include <iostream>

using namespace std;

int main()
{
    int i;
    int n;
    int value;
    long long result;
    long long sum;

    cin >> n;

    result = 0;
    sum = 0;
    for (i=0; i<n; i++) {
        cin >> value;
        sum += value;
        if (sum <= 0){
            sum = 0;
            continue;
        }
        if (sum > result) {
            result = sum;
        }
    }
    cout << result << endl;
    return 0;
}


/*

题目描述

给定一个数组a[0,...,n-1],求其最大子数组(长度>=1)和

输入描述

第一行一个整数n(1<=n<=100000)，然后依次输入n个整数（每个整数范围[-5000, 5000]）

输出描述

输出一个整数表示最大子数组和

样例输入

5
1 -1 1 1 -1
样例输出

2
注释

本题和最大子数组和题相比数组长度变大，对程序的运行效率要求更加严格。
 */
