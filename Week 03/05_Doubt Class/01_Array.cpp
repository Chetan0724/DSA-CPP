#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    cout << sizeof(arr) << endl;
    int n = sizeof(arr) / sizeof(int);
    cout << "Size of array: " << n << endl;

    char chararr[6] = {'a', 'b', 'c', 'd', 'e', 'f'};
    cout << sizeof(chararr) << endl;
    int nchar = sizeof(chararr) / sizeof(char);
    cout << "Size of Char Array: " << nchar << endl;

    return 0;
}