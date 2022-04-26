#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

// ex1
class Print
{
public:
    void print(){}
    template <typename T,typename... Types>// typename...是关键字
    void print(const T& firstArg,const Types&... args)// ...需要在自定义类型后面出现
    {
        cout << firstArg << endl;
        print(args...);// ...需要在变量后面出现
    }
};

int main()
{
    Print m_print;
    m_print.print(1,2,3,4);
}