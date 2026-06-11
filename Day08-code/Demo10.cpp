#include <iostream>
#include <string>
using namespace std;

// 类对象作为类成员

class Phone
{
public:
    string m_PName;
    Phone(string name)
    {
        m_PName = name;
    }
};

class Person
{
public:
    string m_Name;
    Phone m_Phone;

    Person(string name, string pName) : m_Name(name), m_Phone(pName)
    {
    }
};

void test01()
{
    Person p("张三", "iphone");
    cout << p.m_Name << ": " << p.m_Phone.m_PName << endl;
}

int main()
{
    test01();
}
