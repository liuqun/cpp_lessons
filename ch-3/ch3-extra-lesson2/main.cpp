#include<iostream>

using namespace std;

void PrintDiagram(int m)
{
    int i;

    cout<<'|'<<endl;
    for(i=0;i<3;i++){
        cout<<'|';
        for(int j=0;j<m;j++){
            cout<<'*';
        }
        cout<<endl;
    }
    cout<<'|'<<endl;
}

int main()
{
    int x1, x2, x3;

    cin >> x1;
    cin >> x2;
    cin >> x3;
    PrintDiagram(x1);
    PrintDiagram(x2);
    PrintDiagram(x3);

    return 0;
}
/*
设计函数打印直方图，直方图宽度为3行，每列代表数据1％。如下面的图形表示10％。

|

|**********

|**********

|**********

|

 */
