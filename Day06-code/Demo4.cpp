#include <iostream>
using namespace std;
int& test01() {
    static int a = 10;
    return a;
}
int& test02() {
    static int a = 10;
    return a;
}
int main() {
    //引用做函数返回值
    int& a = test01();
    cout << a << endl;

    int &b = test02();
    test02() = 20;
    cout << b << endl;
}