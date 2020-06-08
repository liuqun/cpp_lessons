#include <iostream>
#include <vector>
using namespace std;

int array_find(int array[], int max_items, int item_value)
{
    int i;
    for (i=0; i<max_items && array[i] != item_value; i++) {
    }
    return i;
}

int main()
{
    int i;
    int j;
    int k;

    int n;
    int array[1000];//= {0,0,0,1, 1,0,1,1,     1,1,  0, 1, 1, 1,};
    int result;

    vector<int> vec;


//    n = 3;

    cin >> n;
    for (int m=0; m<n; m++) {
        cin >> array[m];
    }

    i = array_find(array, n, 1);
    if (i>=1) {
        vec.push_back(0);
    }
    result = 1;
    while (i<n) {
        j = i+1;
        while (j<n && 1==array[j]) {
            j++;
        }
        vec.push_back(j-i);
        if (j>=n) {
            break;
        }
        k = j + array_find(array+j, n-j, 1);
        if (k>=n) {
            vec.push_back(0);
            break;
        }
        if (k-j >= 2) {
            vec.push_back(0);
        }
        i = k;

    }
    if (array[n-1]) {
        vec.push_back(-1);
    }
    unsigned ii;
    int prev = vec[0];
    for (ii = 1; ii<vec.size(); ii++) {
        if (prev + vec[ii] + 1 > result) {
            result = prev + vec[ii] + 1;
        }
        prev = vec[ii];
    }
    cout << result << endl;
    return 0;
}


/*
最多连续的1-II
题目描述

给定一个只有0和1组成的数组，如果允许将其中的某一个0改成1, 找出其中最长的连续1的长度。

输入描述

输入一个整数n，表示有n个数字，其中0 < n < 1000，数字仅为0或1.

接下来一行有n个数字，表示数组的元素。

输出描述

输出为一行，表示其中最长的连续1的长度。

样例输入
9
1 0 0 1 1 1 0 1 1
样例输出
6


样例输入
1
1
样例输出1

9
1 0 0 1 1 1 0 0 1
样例输出4



13
1 0 0 1 1 1 0 1 1 0 1 1 1
样例输出6

12
1 0 0 1 1 0 1 1 0 1 1 1
样例输出6
 */
