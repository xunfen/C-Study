#include <iostream>
using namespace std;
//访问权限：公共public、保护protected、私有private
//公共：成员类内可以访问，类外可以访问
//保护：成员类内可以访问，类外不可以访问->继承类内可以访问
//私有：成员类内可以访问，类外不可以访问->继承类内不可以访问

class Person {
    public:
    string name;

    protected:
    int age;

    private:
    string sex;

    public:
    void show() {
        cout << "name:" << name << endl;
        cout << "age:" << age << endl;
        cout << "sex:" << sex << endl;
    }
};

int main() {
    Person p;
    p.name = "张三";
    //p.age = 18;   报错
    //p.sex = "男"; 报错
    p.show();
}

