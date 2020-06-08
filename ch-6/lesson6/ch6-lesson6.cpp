#include <iostream>
using namespace std;
//#define MAX_WIDTH 1000
int main(void)
{
    long long i;
    long long total;
    int m;
    int n;
    int value;

    cin >> m;
    cin >> n;
    total = m*n;
    for (i=1; i<=total; i++){
        cin >> value;
        cout << value;
        if (0 == (i % m)) {
            cout << endl;
        } else {
            cout << " ";
        }
    }

    return 0;
}
/*
矩阵调整
题目描述

给定一个M行N列的矩阵，请将矩阵reshape成N行M列的矩阵。

输入描述

首先输入一行包含两个正整数M和N, 其中0 < M, N < 1000, M表示矩阵的行数，N表示矩阵的列数。

接下来是M行，每一行有N个数字，表示矩阵的一行。

输出描述

输出为N行，每一行有M个用空格隔开的数字，表示Reshape后矩阵的每一行。

样例输入

2 3
1 2 3
4 5 6
样例输出

1 2
3 4
5 6
*/
