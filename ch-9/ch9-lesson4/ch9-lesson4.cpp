#include <iostream>
#include <stack>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    std::stack<std::string> s;
    std::string line;
    std::string token;

    while (!cin.eof()) {
        std::getline(cin, line);

        std::istringstream lineStream(line);
        while (!lineStream.eof()) {
            lineStream >> token;
            s.push(token);
        }
        while (!s.empty()) {
            cout << s.top();
            s.pop();
            if (!s.empty()) {
                cout << ' ';
            }
        }
        cout << endl;
    }
    return 0;
}

/*
 * 翻转单词

题目描述

给定一个字符串，字符串中包含用空格隔开的单词。翻转字符串中所有单词的顺序。

输入描述

输入为一个长度不超过1000的字符串，字符串中有用空格隔开的单词。

输出描述

输出翻转单词顺序之后的字符串。

样例输入

I love Tsinghua
Tsinghua
样例输出

Tsinghua love I
Tsinghua
*/
