#include <iostream>
using namespace std;
int main() {
    //空指针:指向内存中编号为0的空间->0-255之间的内存编号是系统占用的，因此不可访问
    //用于初始化指针变量
    //空指针指向的内存是不可访问的
    int *p1 = nullptr;
    int *p2 = NULL;
    //NULL和nullptr是等价的
    cout << "p1:" << p1 << endl;
    cout << "*p1:" << *p1 << endl;
    cout << "p2:" << p2 << endl;
    cout << "*p2:" << *p2 << endl;
    //可以打印出指针的值，但是不能打印出指针的地址
}
