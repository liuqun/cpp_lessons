#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
	map<string, int> wc;
    std::string word;

    while (!cin.eof()) {
        cin >> word;
        if (0 == word.compare("QUIT")) {
        	break;
		}
		if (wc.end() == wc.find(word)) {
			cout << "0" << endl;
			wc.emplace(word, 1);
			continue;
		} else {
			int& cnt = wc[word];
			cout << cnt << endl;
			cnt += 1;			
		}
    }
	return 0;
}

/*
单词计数
题目描述

编写一个程序，从键盘输入一个个单词，
每接收到一个单词后，输出该单词曾经出现过的次数，
接收到“QUIT”单词后程序直接退出。

建议使用multiset或者map来解决该问题

输入描述

一行一个单词，"QUIT"结束

输出描述

每行输出为相应单词统计结果

*/

/*
样例输入

c++
map
set
map
vector
set
multiset
c++
QUIT

样例输出

0
0
0
1
0
1
0
1
*/
