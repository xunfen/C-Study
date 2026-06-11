#include <iostream>
using namespace std;

// 初始化列表

class Person
{
public:
    int m_A;
    int m_B;
    int m_C;

    Person() : m_A(10), m_B(20), m_C(30)
    {
    }

    Person(int a, int b, int c)
    {
        m_A = a;
        m_B = b;
        m_C = c;
    }
};

void test01()
{
    // Person p(10,20,30);
    Person p;
    cout << "m_A:" << p.m_A << endl;
    cout << "m_B:" << p.m_B << endl;
    cout << "m_C:" << p.m_C << endl;

    cout << "------------------------" << endl;

    Person p1(30, 20, 10);
    cout << "m_A:" << p1.m_A << endl;
    cout << "m_B:" << p1.m_B << endl;
    cout << "m_C:" << p1.m_C << endl;
}

int main()
{
    test01();
}