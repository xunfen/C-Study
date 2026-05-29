#include <iostream>
using namespace std;

class Circle {
    public:
        int m_r;
        double calculateZC() {
            return 3.14 * m_r * 2;
        }

};

int main() {
    Circle c1;
    c1.m_r = 10;
    cout << "圆的周长为：" << c1.calculateZC() << endl;
}