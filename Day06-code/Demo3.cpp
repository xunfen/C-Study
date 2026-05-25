#include <iostream>
using namespace std;
void swap(int &a, int &b) {
    int temp = a;
    temp = b;
    b = a;
    a = temp;
}

int main() {
    //要用做函数参数
    int a = 10, b = 20;
    swap(a, b);
    cout << "a = " << a << " b = " << b << endl;
}
