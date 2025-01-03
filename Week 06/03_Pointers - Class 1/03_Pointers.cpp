#include <iostream>
using namespace std;

int main()
{
    // Pointer with Array
    int arr[5] = {10, 20, 30, 40, 50};
    cout << arr << endl;     // Base Address --> 0x60fef8
    cout << arr[0] << endl;  // 10
    cout << &arr[0] << endl; // Base Address
    cout << &arr << endl;    // Base Address

    // cout << arr + 2 << endl;
    cout << &arr[1] << endl; // 0x60fef8 + 4 = 0x60fefc
    cout << &arr[2] << endl; // 0x60fefc + 4 = 0x60ff00

    cout << *arr << endl;       // 10
    cout << *arr + 1 << endl;   // 11
    cout << *(arr) + 1 << endl; // 11
    cout << *(arr + 1) << endl; // 20
    cout << *(arr + 2) << endl; // 30
    cout << *(arr + 3) << endl; // 40

    // *arr == *arr + 0 == *(arr+0)
    // *arr == *(104)
    // Value stored at address 104 --> 10

    // *(arr + 0) ---> arr[0]
    // *(arr + 1) ---> arr[1]
    // *(arr + 2) ---> arr[2]
    // *(arr + i) ---> arr[i]
    // or
    // *(i + arr) ---> i[arr]

    int a = 5;
    int *p = &a;
    p = p + 1;
    cout << *p << endl;

    return 0;
}