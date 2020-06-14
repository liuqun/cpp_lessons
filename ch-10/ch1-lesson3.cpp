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
���ʽ�Ϸ���
��Ŀ����

����������ĸ�� ��(' �� ')' �� 
'{' �� '}' �� '[' �� ']' ���ַ�����
�ж��ַ����Ƿ���Ч��������ȫ����� ,
({ask}) ������ԣ��� ({ask)} ���ǡ�

��������

һ���ַ�����

�������

��Գɹ���� 1 ��������� 0��

*/

/*
��������

(a)[b]{c}

�������

1

*/
