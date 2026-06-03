#include <iostream>
using namespace std;

// 构造函数：创建对象时自动调用
// 析构函数：销毁对象时自动调用

class Person
{
public:
    // 1.构造函数
    //  没有返回值，不用写void
    //  函数名与类名相同
    //  可以有参数，可以发生重载
    //  创建对象时会自动调用，且只调用一次
    Person()
    {
        cout << "Person构造函数被调用" << endl;
    }

    // 2.析构函数
    // 没有返回值，不用写void
    // 函数名与类名相同，但前面加~
    // 没有参数，不可以发生重载
    // 销毁对象时会自动调用，且只调用一次
    ~Person()
    {
        cout << "Person析构函数被调用" << endl;
    }
};

void test01()
{
    Person p1;
}

int main()
{
    test01();
}
