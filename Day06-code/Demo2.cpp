#include <iostream>
using namespace std;
int main() {
    int a = 10;
    int &b = a;
    //int &c;       会报错，要用必须在定义的同时赋值
    int &c = a;
    c = b;
    cout << a << " " << b << " " << c << endl;
}