#include <iostream>
using namespace std;
int main() {
    int a = 10;
    int * p = &a;
    cout << p << endl;
    cout << *p << endl;
    cout << &a << endl;
    cout << a << endl;

    *p = 20;            //可以通过指针修改变量的值
    cout << a << endl;
    cout << *p << endl;
    cout << &a << endl;
    cout << p << endl;
    cout << &p << endl;
}