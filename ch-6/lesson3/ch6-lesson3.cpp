#include <iostream>
#include <algorithm>
using namespace std;
#define MAX_COUNT 5000
int main(void)
{
    int i;
    int n;
    int k;
    int data[MAX_COUNT];

    cin >> n;
    //if (n < 0) {
    //    cerr<<"Error: n="<<n<<endl;
    //    return 0;
    //}
    cin >> k;
    //if (k > n) {
    //    cerr<<"Error: k="<<k<<endl;
    //    return 0;
    //}

    for (i=0; i<n; i++) {
        cin >> data[i];
    }
    sort(data, data+n);
    cout << data[k-1] << endl;

    return 0;
}
/*
4 2
4 2 1 3
*/
