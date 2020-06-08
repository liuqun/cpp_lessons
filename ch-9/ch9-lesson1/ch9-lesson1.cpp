#include <algorithm>
#include <iostream>
using namespace std;

template <class T>
T FindMid(T array[], size_t len)
{
    std::sort(array, array+len);

    T mid;
    mid = array[len/2];

    return mid;
}
int main()
{
    size_t j;
    int *iArray;//int iArray[10] = {3,1,4,5,2, 6,8,9,7,10};
    double *dArray;

    size_t m;
    size_t n;
    cin >> m;
    cin >> n;

    iArray = new int[m];
    dArray = new double[n];

    for (j=0; j<m; j++) {
        cin >> iArray[j];
    }
    for (j=0; j<n; j++) {
        cin >> dArray[j];
    }

    cout << FindMid(iArray, m) << endl;
    cout << FindMid(dArray, n) << endl;

    delete[] iArray;
    delete[] dArray;
    return 0;
}
/*
中位数
题目描述

请实现一个模板函数，求出数组中的中位数，数组可能为整数数组，也可能为浮点数数组。
数组的中位数定义为数组按非递减顺序排序后的第 ⌊ n/2 ⌋ + 1 个数，其中n为数组元素个数。
每个测试用例都会测试一个整数数组和一个浮点数数组。

输入描述

每个测例共 3 行，第一行输入 m 和 n （ m > 0, n > 0 ），
分别表示接下来有 m 个整数和 n 个浮点数。第二行为 m 个整数，
用空格隔开，第三行为 n 个浮点数，用空格隔开。
整数的范围不超过 int 可表示范围，浮点数的范围不超过 double 可表示的范围。

输出描述

对于每一个测例，输出两行，第一行为m个整数的中位数，第二行为n个浮点数的中位数。

样例输入

4 5
1 2 3 4
10.01 0.003 255.256 -3.2 100000.3

样例输出

3
10.01

*/

//template <class T>
//const T FindMid_v2(const T array[], size_t len)
//{
//    T *buf = new T[len];
//    for (size_t i=0; i<len; i++) {
//        buf[i] = array[i];
//    }
//    std::sort(buf, buf+len);
//    T mid;
//    mid = buf[len/2];
//    delete [] buf;
//    return mid;
//}
