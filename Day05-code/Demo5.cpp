#include <iostream>
using namespace std;
int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int * p = arr;//指向数组首地址
    cout << *p << endl;
    cout << *(p + 1) << endl;//向后移动一个元素(偏移四个字节)

    cout << "======================" << endl;

    for (int i = 0; i < 10; i++) {
        cout << *(p + i) << endl;
    }
}