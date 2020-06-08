#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main(void)
{
    unsigned int i;
    int result;
    string line;

    result = 0;
    while (!cin.eof()) {
        cin >> line;
        for (i=0; i<line.length(); i++) {
            result *= 26;
            result += static_cast<unsigned int>(toupper(line[i]) - 'A') + 1;
        }
        cout << result << endl;
        result = 0;
    }

    return 0;
}
/*
Excel编号转换-I
题目描述

Excel中列的编号都是由A-Z组成，比如A, AE等。给定一个Excel中的列编号，请转化为数字编号。

例如:

A -> 1
B -> 2
C -> 3

...

Z -> 26
AA -> 27
AB -> 28

输入描述

输入为一行，表示Excel中的列编号.

输出描述

输出为一行，表示数字编号.

样例输入

A
AB

样例输出

1
28
*/
