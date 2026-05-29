#include <iostream>
using namespace std;
//struct:公共public
//class:私有private

struct Student {
    public:
    string name;
    int age;

    void show() {
        cout << "姓名：" << name << "，年龄：" << age << endl;
    }
};

class Teacher {
    public:
    string name;
    int age;
    void show() {
        cout << "姓名：" << name << "，年龄：" << age << endl;
    }
};

int main() {
    Student s1;
    s1.name = "a";
    s1.age = 18;
    s1.show();
    Teacher t1;
    t1.name = "q";
    t1.age = 18;
    t1.show();
}