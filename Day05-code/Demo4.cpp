#include <iostream>
using namespace std;
int main() {
    //常量指针：指针指向可以改，但是指向的值不可以改
    //指针常量：指针的指向不可以改，指针指向的值可以改
    int a = 10;
    int b = 20;
    const int *p = &a;  //常量指针
    //*p = b;修改值会报错

    int * const p2 = &a;  //指针常量
    //p2 = &b;修改地址会报错

}