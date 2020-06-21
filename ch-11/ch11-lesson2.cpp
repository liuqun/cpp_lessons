#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
 
class Student
{
public:
	int id;
	string name, grade;
	Student():id(),name(""),grade("")
	{
		//id=-1;
		//name='\0';
		//grade='\0';
	}
	Student(int id, string name, string grade):id(id),name(name),grade(grade)
	{
		//this->id=id;
		//this->name=name;
		//this->grade=grade;
	}

	bool operator < (const Student& that) const
	{
		return (this->id < that.id);
	}
};

istream & operator >> (istream & in, Student & s);
ostream & operator << (ostream & out, Student & s);

istream & operator >> (istream & in, Student & s)
{
	in>>s.id;
	in>>s.name;
	in>>s.grade;
	return in;
}
ostream & operator << (ostream & out, Student & s)
{
	out<<s.id<<" "<<s.name<<" "<<s.grade<<endl;
	return out;
}
 
int main()
{
	vector<Student> sv;
	Student temp;
	while (cin >> temp)
    {
		sv.push_back(temp);
    }
	sort(sv.begin(), sv.end());
	for (int i = 0; i < sv.size(); ++i)
	   	cout << sv[i];
	return 0;
}
//��������������������������������
//��Ȩ����������ΪCSDN������yzxzsp11����ԭ�����£���ѭCC 4.0 BY-SA��ȨЭ�飬ת���븽��ԭ�ĳ������Ӽ���������
//ԭ�����ӣ�https://blog.csdn.net/yzxzsp11/java/article/details/46817619
