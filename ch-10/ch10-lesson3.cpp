#include <iostream>
#include <string>
#include <stack>
using namespace std;

bool isLegalLine(const std::string& line)
{
	std::stack<char> stck;

	for (auto ch : line) {
		switch (ch) {
		case '(':
		case '[':
		case '{':
			stck.push(ch);
			break;
		case ')':
			if ('(' != stck.top()) {
				return false;
			}
			stck.pop();
			break;
		case ']':
			if ('[' != stck.top()) {
				return false;
			}
			stck.pop();
			break;
		case '}':
			if ('{' != stck.top()) {
				return false;
			}
			stck.pop();
			break;
		default:
			break;
		}
	}
	return stck.empty();
}

int main()
{
	std::string line;

    while (!cin.eof()) {
		if (!std::getline(cin, line)) {
			break;
		}
		if (isLegalLine(line)) {
			cout << "1" << endl;
		} else {
			cout << "0" << endl;
		}
    }
	return 0;
}


/*
表达式合法性
题目描述

给定含有字母及 ‘(' ， ')' ， 
'{' ， '}' ， '[' ， ']' 的字符串，
判断字符串是否有效，即括号全部配对 ,
({ask}) 正常配对，而 ({ask)} 不是。

输入描述

一个字符串。

输出描述

配对成功输出 1 ，否则输出 0。

*/

/*
样例输入

(a)[b]{c}

样例输出

1

*/
