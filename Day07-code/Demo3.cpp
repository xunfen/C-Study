#include <iostream>
using namespace std;

void func() {
    cout << "func 的调用" << endl;
}

void func(int a) {
    cout << "func(int a) 的调用" << endl;
}

void func(int a, int b) {
    cout << "func(int a, int b) 的调用" << endl;
}

void func(double a) {
    cout << "func(double a) 的调用" << endl;
}

void func(double a, int b) {
    cout << "func(double a, int b) 的调用" << endl;
}

void func(int a, double b) {
    cout << "func(int a, double b) 的调用" << endl;
}

//函数的重载
//函数名相同，参数列表不同或者返回值不同或者顺序不同
//但是返回值不同是不允许的

int main() {
    func();
    func(1);
    func(1, 2);
    func(1.1);
    func(1.1, 2);
    func(1, 2.1);
    return 0;
}