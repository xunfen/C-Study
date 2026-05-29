#include <iostream>
#include <string>
using namespace std;

class student {
    public:
        string name;
        int num;


        void setName(string newName) {
            name = newName;
        }

        void show() {
            cout << "姓名：" << name << endl << "学号：" << num << endl;
        }
};

int main() {
    student s1;
    s1.name = "张三";
    s1.num = 1;

    student s2;
    s2.name = "李四";
    s2.num = 2;

    s1.show();
    s2.show();

    s1.setName("王五");
    s1.show();

}