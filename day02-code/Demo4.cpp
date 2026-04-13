#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    float b = 20.5;
    float c = 20.5f;
    double d = 20.5;
    cout << "a=" << a << endl;
    cout << "sizeof(a)=" << sizeof(a) << endl;
    cout << "b=" << b << endl;
    cout << "sizeof(b)=" << sizeof(b) << endl;
    cout << "c=" << c << endl;
    cout << "sizeof(c)=" << sizeof(c) << endl;
    cout << "d=" << d << endl;
    cout << "sizeof(d)=" << sizeof(d) << endl;
    return 0;
}