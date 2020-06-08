#include <iostream>
#include <string>
using namespace std;

template<class T, int MAX = 1000>
class Stack
{
private:
    T list[MAX + 1];
    int top;
public:
    Stack()
    {
        top = 0;
    }
    void push(const T &item)//将item压栈
    {
        if (top >= MAX) {
            return;
        }
        list[top++] = item;
    }
    T pop()//将栈顶元素弹出栈
    {
        if (top <= 0) {
            throw "STACK_IS_EMPTY";
        }
        return list[--top];
    }
    const T & peek() const //访问栈顶元素
    {
        return list[top - 1];
    }
    bool isEmpty() const //判断是否栈空
    {
        return (top <= 0);
    }
};

bool HasBrac(std::string line)
{
    bool ret = false;
    Stack<char> stack;
    try {
        for (auto ch : line) {
            if ('(' == ch) {
                stack.push(ch);
                continue;
            }
            if (')' == ch) {
                if (stack.isEmpty()) {
                    return false;
                }
                (void) stack.pop();
            }
        }
        return stack.isEmpty();
    } catch (const char *msg) {
        ret = false;
        msg = nullptr;
    }
    return ret;
}

//请完成栈模板类的实现，并解决括号匹配问题
int main()
{
    std::string line;

    while (!cin.eof()) {
        cin >> line;
        if (HasBrac(line)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}

//template<class T, int MAX>
//Stack::Stack()
//{
//    top = 0;
//}
