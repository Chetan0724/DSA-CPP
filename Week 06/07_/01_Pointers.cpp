#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    // Pointer to an array
    int *ptr = arr;
    // Pointer to an array
    // int *ptr = &arr;
    int(*ptrr)[5] = &arr;
    cout << (*ptrr)[0];

    char ch[10] = "chetan";
    char *cptr = &ch;

    // Array of pointer
    int *arr[5];

    return 0;
}