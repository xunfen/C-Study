#include <iostream>
using namespace std;

// 深拷贝与浅拷贝
class Person
{
public:
    Person()
    {
        cout << "Person默认构造函数调用" << endl;
    }

    Person(int age)
    {
        m_Age = age;
        cout << "Person有参构造函数调用" << endl;
    }

    Person(int age, int height)
    {
        m_Age = age;
        m_Height = new int(height); // 在堆区分配内存
        cout << "Person有参构造函数2调用" << endl;
    }

    // 拷贝构造函数(深拷贝)
    Person(const Person &p)
    {
        cout << "Person拷贝构造函数调用" << endl;
        m_Age = p.m_Age;
        // 深拷贝:重新在堆区开辟内存
        m_Height = new int(*p.m_Height);
    }

    ~Person()
    {
        // 释放堆区内存
        if (m_Height != NULL)
        {
            delete m_Height;
            m_Height = NULL; // 防止野指针，给他置空
        }
        cout << "Person析构函数调用" << endl;
    }

    int m_Age;
    int *m_Height;
};

void test01()
{
    Person p1(18);
    cout << "p1的年龄为：" << p1.m_Age << endl;

    Person p2(p1);
    cout << "p2的年龄为：" << p2.m_Age << endl;
}

void test02()
{
    Person p1(18, 160);
    cout << "p1的年龄为：" << p1.m_Age << endl;
    cout << "p1的身高为：" << *p1.m_Height << endl;

    Person p2(p1);
    cout << "p2的年龄为：" << p2.m_Age << endl;
    cout << "p2的身高为：" << *p2.m_Height << endl;
}

int main()
{
    test02(); // 测试深拷贝
    return 0;
}