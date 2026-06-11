#include <iostream>
using namespace std;

//深拷贝与浅拷贝
class Person {
    public:
    Person() {
        cout << "Person默认构造函数调用" << endl;
    }

    Person(int age) {
        m_Age = age;
        cout << "Person有参构造函数调用" << endl;
    }

    Person(int age,int height) {
        m_Age = age;
        m_Height = height;
        new int (m_Height);
        cout << "Person有参构造函数2调用" << endl;
    }

    ~Person() {
        cout << "Person析构函数调用" << endl;
    }

    int m_Age;
    int *m_Height;

};

void test01() {
    Person p1(18);
    cout << "p1的年龄为：" << p1.m_Age << endl;

    Person p2(p1);
    cout << "p2的年龄为：" << p2.m_Age << endl;         //编译器给我们做了一个浅拷贝
}

void test02() {
    Person p1(18, 160);
    cout << "p1的年龄为：" << p1.m_Age << endl;
    cout << "p1的身高为：" << *p1.m_Height << endl;

    Person p2(p1);
    cout << "p2的年龄为：" << p2.m_Age << endl;
    cout << "p2的身高为：" << *p2.m_Height << endl;
}


int main() {
    test01();
}
