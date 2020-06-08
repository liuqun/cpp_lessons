//#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

//    template <class T>
//    class Node {
//    //private:
//    //    Node<T> *next;  //指向后继结点的指针
//    public:
//        T data; //数据域
//        Node (const T &data, Node<T> *next = 0);    //构造函数
//    //    void insertAfter(Node<T> *p);   //在本结点之后插入一个同类结点p
//    //    Node<T> *deleteAfter(); //删除本结点的后继结点，并返回其地址
//    //    Node<T> *nextNode();            //获取后继结点的地址
//    //    const Node<T> *nextNode() const;     //获取后继结点的地址
//    };

//    template <class T>
//    struct Node {
//        Node<T> *next;  //指向后继结点的指针
//    };

//    template <class T>
//    class LinkedList {
//    public:
//        LinkedList()
//        {
//            head = nullptr;
//        }
//    public:
//        Node<T> *head;
//    };
int main()
{
    vector<int> v1;
    vector<double> v2;

    int iValue;
    double dValue;

    int j;
    int cntInteger;
    int cntDouble;
    cin >> cntInteger;
    cin >> cntDouble;

    for (j=0; j<cntInteger; j++) {
        cin >> iValue;
        v1.push_back(iValue);
    }
    for (j=0; j<cntDouble; j++) {
        cin >> dValue;
        v2.push_back(dValue);
    }
    for (j=0; j<cntInteger; j++){
        cout << v1[j];
        if (j<cntInteger) {
            cout << ' ';
        }
    }
    cout << endl;
    for (j=cntInteger-1; j>=0; j--){
        cout << v1[j];
        if (j>0) {
            cout << ' ';
        }
    }
    cout << endl;
    for (j=0; j<cntDouble; j++){
        cout << v2[j];
        if (j<cntDouble) {
            cout << ' ';
        }
    }
    cout << endl;
    for (j=cntDouble-1; j>=0; j--){
        cout << v2[j];
        if (j>0) {
            cout << ' ';
        }
    }
    cout << endl;

    return 0;
}
