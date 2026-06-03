#include <iostream>
#include <string>
using namespace std;
class Person
{

private:
    string name;  // 可读可写
    int age = 18; // 只读
    string idol;  // 只写
public:
    void setName(string name)
    {
        this->name = name;
    }
    string getName()
    {
        return name;
    }
    void setAge(int age) {
        if (age > 0 && age < 120) {
            this->age = age;
        } else {
            cout << "年龄不合法" << endl;
        }
    }
    int getAge()
    {
        return age;
    }
    void setIdol(string idol)
    {
        this->idol = idol;
    }

};

int main()
{
    Person p;
    p.setName("张三");
    p.setIdol("李四");
    p.setAge(200);
    cout << p.getName() << endl;
    cout << p.getAge() << endl;
    //cout << p.getIdol() << endl;
    return 0;
}