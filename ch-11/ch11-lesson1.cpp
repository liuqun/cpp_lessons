#include <iostream>
#include <sstream>
#include <iomanip>
#include <string>
using namespace std;
 
int main()
{
    int m,n;
    double num;

    while(cin>>m>>n>>num){
        if(m==0&&n==0)
            cout<<0<<endl; 
		else{
            cout<<setw(m)<<setfill('0')<<int(num);//����������� 
            if(n!=0){//n=0ʱ��ֻ��Ҫ����������� 
                ostringstream os;
                os<<fixed<<setprecision(n+1)<<num-int(num);//��һλ��0������Ҫ��������ӡ�.����ʼ�ͺã�����Ҫ+1
                string str=os.str();
                for (int i=1;i<=n+1;i++)//��1��ʼ
                    cout<<str[i];
            }
            cout << endl;
        }
    }
    return 0;
} 
//��������������������������������
//��Ȩ����������ΪCSDN��������Ů����������ԭ�����£���ѭCC 4.0 BY-SA��ȨЭ�飬ת���븽��ԭ�ĳ������Ӽ���������
//ԭ�����ӣ�https://blog.csdn.net/lmy1997_1007/java/article/details/54848520 
