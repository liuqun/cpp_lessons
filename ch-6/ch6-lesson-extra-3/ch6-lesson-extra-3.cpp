#include <iostream>
#include <algorithm>
using namespace std;

struct Range {
    int l;
    int r;
};

// override the default compare operator
bool operator<(const Range& i, const Range& j)
{
    return i.l < j.l;
}

int main()
{
    int cnt;

    Range *prev;
    Range *curr;
    Range array[100];
    int n;

    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> array[i].l;
        cin >> array[i].r;
    }

    std::sort(array+0, array+n);

    prev = &array[0];
    for (int i=1; i<n; i++) {
        curr = &array[i];

        if (curr->l <= prev->r) {
            prev->r = std::max(curr->r, prev->r);
            continue;
        }
        prev++;
        prev->l = curr->l;
        prev->r = curr->r;
    }
    ptrdiff_t n_merged = prev+1-array;
    cnt = 0;
    for (int i=0; i<n_merged; i++) {
        cnt += (array[i].r - array[i].l + 1);
    }
    cout << cnt << endl;
    return 0;
}

/*

区间并集的长度
题目描述

有 n 个闭区间，每个闭区间由 [l, r] 表示，请编程计算这 n 个闭区间并集的总长度。

比如 3 个闭区间 [1,5], [4,6] 和 [8,9]，其并集为[1,6] U [8,9]，总长度为 (6 - 1 + 1) + (9 - 8 + 1) = 8。

输入描述

输入第一行为一个整数 n (1 ≤ n ≤ 100)；

接下来的一行有 2n 个数，每两个数表示区间的左右边界 l, r (-1000 ≤ l ≤ r ≤ 1000)

输出描述

输出并集长度

样例输入

3
1 5 4 6 8 9
样例输出

8
*/
