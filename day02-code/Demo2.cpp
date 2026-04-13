#include <iostream>
using namespace std;
#define PI 3.14//宏常量
const int day = 7;//const修饰变量也属于常量
int main() {
    //常量
    const int week = 7;//const修饰变量也属于常量可以写在方法体里面
    cout << "PI = " << PI << endl;
    cout << "day = " << day << endl;
    cout << "week = " << week << endl;
}