#include <iostream>
using namespace std;
void func(int a) {
    cout << "func(int a)" << endl;
}

/* void func(int a  = 10) {
    cout << "func(int a = 10)" << endl;
} */

int main() {
    //func();     //一定报错，因为参数类型一样
    func(20);
}