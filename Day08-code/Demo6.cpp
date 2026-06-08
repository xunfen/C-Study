#include <iostream>
using namespace std;

//函数的分类：空参构造/有参构造、普通构造/拷贝构造
//此处演示拷贝构造

class Person
{
public:
    //空参构造
    Person()
    {
        cout << "Person构造函数被调用" << endl;
    }
    //有参构造
    Person(int age)
    {
        cout << "Person有参构造函数被调用" << endl;
    }

    ~Person()
    {
        cout << "Person析构函数被调用" << endl;
    }

    Person(const Person &p) {                       //p作为参数不能给p本身改了，所以使用const
        //age = p.age;                              //此程序并无age变量，age仅为演示
        cout << "Person拷贝构造函数被调用" << endl;
    }
};


//函数的调用：
//1.括号法：Person p;
void Test01() {
    //Person p1();                      //调用默认构造函数时不要带括号,不然编译器会认为是函数的声明,就不会创建对象
    Person p1;
}
void Test02() {
    Person p2(10);
    //拷贝构造函数
    Person p3(p2);
}

//2.显示法：
void Test03() {
    Person p1;
    Person p2 = Person(p1);
    //匿名对象：Person(xx),当前行运行结束后系统立即回收匿名对象,但是不要用拷贝构造初始化匿名对象，如Person(p1),不然编译器会认为这是对象声明
}

//3.隐式法：
void Test04() {
    Person p1;
    Person p4 = p1;
}

int main() {
    Test01();
    cout << "------------------" << endl;
    Test02();
    cout << "------------------" << endl;
    Test03();
    cout << "------------------" << endl;
    Test04();
}
