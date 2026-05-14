#include <iostream>
using namespace std;
void sort(int arr[], int n);
int main() {
    int arr[] = {3, 1, 5, 7, 9, 2, 6, 8, 0, 4};
    sort(arr, 10);
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
}

void sort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}