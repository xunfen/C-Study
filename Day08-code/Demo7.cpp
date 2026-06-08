#include <iostream>
using namespace std;

// 拷贝函数的调用时机：
// 1.使用一个已经创建完毕的对象来初始化一个新对象
// 2.值传递的方式给函数参数传值
// 3.值方式返回局部对象


class Person
{
public:
    Person() {
        cout << "Person默认构造函数调用" << endl;
    }

    ~Person() {
        cout << "Person析构函数调用" << endl;
    }
    
    Person(int age) {
        cout << "Person有参构造函数调用" << endl;
        m_Age = age;
    }

    Person(const Person &p) {
        cout << "Person拷贝构造函数调用" << endl;
        m_Age = p.m_Age;
    }

    int getAge() {
        return m_Age;
    }

private:
    int m_Age;
};

void test01() {
    Person p1(20);
    Person p2(p1);
    cout << "p2的年龄为：" << p2.getAge() << endl;
}


void Demo(Person p) {
    cout << "Demo函数调用" << endl;
}
void test02() {
    Person p1;
    Demo(p1);
}


Person Demo2() {
    Person p6;
    return p6;
}
void test03() {
    Person p = Demo2();
}

int main() {
    test01();
    cout << "-----------------" << endl;
    test02();
    cout << "-----------------" << endl;
    test03();
}
