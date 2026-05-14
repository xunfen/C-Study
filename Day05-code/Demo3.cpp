#include <iostream>
using namespace std;
int main() {
    //野指针：指向非法的内存空间
    int * p = (int *)0x12345678;
    cout << *p << endl;
    cout << p << endl;
    //地址可以给打印出，指针所指向的值无法被打印，报错
}
