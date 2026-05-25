#include <iostream>
using namespace std;
int main() {
    int a = 10;
    int &b = a;     //数据类型要一致
    cout << a << endl;
    cout << b << endl;
    cout << "====================" << endl;
    a = 20;
    cout << a << endl;
    cout << b << endl;
    cout << "====================" << endl;
    b = 30;
    cout << a << endl;
    cout << b << endl;
    //改一个全都变

}