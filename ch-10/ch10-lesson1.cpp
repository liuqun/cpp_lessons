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
���ʼ���
��Ŀ����

��дһ�����򣬴Ӽ�������һ�������ʣ�
ÿ���յ�һ�����ʺ�����õ����������ֹ��Ĵ�����
���յ���QUIT�����ʺ����ֱ���˳���

����ʹ��multiset����map�����������

��������

һ��һ�����ʣ�"QUIT"����

�������

ÿ�����Ϊ��Ӧ����ͳ�ƽ��

*/

/*
��������

c++
map
set
map
vector
set
multiset
c++
QUIT

�������

0
0
0
1
0
1
0
1
*/
