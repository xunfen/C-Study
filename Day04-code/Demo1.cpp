#include <iostream>
using namespace std;
/* void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
} */
void swap(int &a, int &b);
int main(){
    int a = 10, b = 20;
    cout << "交换前:a=" << a << " " << "b=" << b << endl;
    swap(a, b);
    cout << "交换后:a=" << a << " " << "b=" << b << endl;
}

//？？？为什么函数声明在main之后还能正常被调用？
//函数的定义出现在了调用之后，但在链接阶段之前编译器已经看到了完整的定义。 
//不过，这段代码在某些严格的编译器设置下可能会报错或产生警告，因为当编译器在 main 中遇到 swap(a, b) 时，它还没有看到 swap 的声明。
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}