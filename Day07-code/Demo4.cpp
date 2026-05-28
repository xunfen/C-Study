#include <iostream>
using namespace std;
 void func(int &a) {
    cout << "int" << endl;
 }

 void func(const int &a) {
    cout << "const int" << endl;
}

int main() {
    func(10);//只读走const
    int a = 10;
    func(a);
}