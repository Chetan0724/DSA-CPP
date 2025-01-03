#include <iostream>
using namespace std;

int main()
{
    int a = 100;
    int *ptr = &a;
    cout << ptr << endl; // Address of a --> 0x60ff08
    cout << a << endl;   // 100
    a = a + 1;
    ptr = ptr + 1;
    cout << a << endl;   // 101
    cout << ptr << endl; // (Address of a) + 1 --> 0x60ff0c

    int b = 100;
    int *ptr1 = &b;
    b = b + 1;
    cout << b << endl; // 101
    *ptr1 = *ptr1 + 1;
    cout << b << endl; // 102

    int c = 100;
    int *ptr2 = &c;
    cout << c << endl;  // 100
    cout << &c << endl; // Address of c --> 0x60fef8
    // cout << *c << endl; error: invalid type argument of unary '*' (have 'int')
    cout << ptr2 << endl;      // Address of c --> 0x60fef8
    cout << *ptr2 << endl;     // 100
    cout << &ptr2 << endl;     // Address of ptr2
    cout << (*ptr2)++ << endl; // 100
    cout << ++(*ptr2) << endl; // 102
    *ptr2 = *ptr2 / 2;
    cout << *ptr2 << endl; // 51
    *ptr2 = *ptr2 - 2;
    cout << *ptr2 << endl; // 49

    int x = 5;
    int *p = &x;
    // Pointer copy
    int *q = p;
    cout << x << endl;  // 5
    cout << &x << endl; // Address of x
    // cout << *x << endl; error: invalid type argument of unary '*' (have 'int')
    cout << p << endl;  // Address of x
    cout << &p << endl; // Address of p
    cout << *p << endl; // 5
    cout << q << endl;  // Address of x
    cout << &q << endl; // Address of q
    cout << *q << endl; // 5

    int y = 5;
    cout << y << endl;   // 5
    cout << y++ << endl; // 5
    cout << y << endl;   // 6
    cout << ++y << endl; // 7

    return 0;
}