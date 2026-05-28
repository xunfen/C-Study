#include <iostream>
using namespace std;

//函数声明有默认参数，函数实现不能有
int func0(int a = 10, int b = 10);
int func1(int a, int b, int c) {
    return a + b + c;
}

int func2(int a, int b, int c = 1) {
    return a + b + c;
}

int func3(int a, int b = 2, int c = 3) {
    return a + b + c;
}
//如果某个位置有默认参数，那么后面的参数必须全部有默认参数 
int main() {
    cout << func1(1, 2, 3) << endl;
    cout << func2(3, 4) << endl;
    cout << func3(5) << endl;
    cout << func3(6, 7) << endl;    //函数如果自己传入了数据，则用传入的，未传入数据则用默认值
    cout << func0(1, 2) << endl;
}

int func0(int a, int b) {
    return a + b;
}