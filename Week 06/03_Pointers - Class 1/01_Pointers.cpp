#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    cout << a << endl;
    cout << "Address of a: " << &a << endl;

    // pointer creation
    int *ptr = &a;
    // accessing value stored at address stored in ptr
    // dereference operator (*)
    cout << "Accessing: " << *ptr << endl;
    cout << ptr << endl;
    cout << &ptr << endl;

    int b;
    // int *pt = b; invalid conversion from 'int' to 'int*'
    // int pt = &b; invalid conversion from 'int*' to 'int'

    int c = 5;
    int *ptr1 = &c;
    cout << sizeof(ptr1) << endl;

    char ch = 'k';
    char *cptr = &ch;
    cout << sizeof(cptr) << endl;

    long lachi = 10;
    long *lptr = &lachi;
    cout << sizeof(lptr) << endl;

    // Bad practice // Declaration
    int *ptr2;
    cout << *ptr2 << endl;

    // Solution // Null ptr
    int *ptr3 = 0;
    // int *ptr3 = nullptr;
    cout << *ptr3 << endl;

    return 0;
}