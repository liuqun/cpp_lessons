#include <iostream>
#include <algorithm>
using namespace std;
#define MAX_INPUT 100
int main(void)
{
    int i;
    int n;
    int value;//int data[MAX_INPUT];
    int result;

    cin >> n;
    //if (n < 0) {
    //    cerr<<"Error: n="<<n<<endl;
    //    return 0;
    //}

    result = 0;
    for (i=0; i<n; i++) {
        cin >> value;
        result ^= value;
    }
    cout << result << endl;

    return 0;
}
/*
查找单独的数
题目描述

有一个由 n 个小于109 无序的正整数构成的数组，其中有且仅有一个数出现了一次，其他的数均出现了两次。请找出这个只出现一次的数。

输入描述

输入第一行为一个正整数 n (1 ≤ n ≤ 100)

下一行中有 n 个正整数 ai (1 ≤ ai≤ 109)

输出描述

输出只出现一次的数

样例输入

5
1 3 4 1 4
样例输出

3
*/
