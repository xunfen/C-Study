#include <iostream>
using namespace std;
int main() {
    int a = 10;
    const int & ref = 10;   //int temp = 10; const int & ref = temp;
    //ref = 20;     常量变为只读不允许修改
    cout << ref << endl;
}