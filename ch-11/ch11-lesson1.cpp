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
            cout<<setw(m)<<setfill('0')<<int(num);//输出整数部分 
            if(n!=0){//n=0时，只需要输出整数部分 
                ostringstream os;
                os<<fixed<<setprecision(n+1)<<num-int(num);//第一位是0，不需要再输出，从‘.’开始就好，所以要+1
                string str=os.str();
                for (int i=1;i<=n+1;i++)//从1开始
                    cout<<str[i];
            }
            cout << endl;
        }
    }
    return 0;
} 
//————————————————
//版权声明：本文为CSDN博主「少女叉着腰」的原创文章，遵循CC 4.0 BY-SA版权协议，转载请附上原文出处链接及本声明。
//原文链接：https://blog.csdn.net/lmy1997_1007/java/article/details/54848520 
