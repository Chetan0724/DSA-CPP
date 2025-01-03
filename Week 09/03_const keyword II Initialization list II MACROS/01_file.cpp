#include <iostream>
using namespace std;

int main()
{
    const int x = 5;
    // x = 10;
    cout << x << endl;

    // Purane compilers mein kaam karta tha
    int *p = &x;
    *p = 10;
    cout << x << endl;

    // int *a = new int;
    // *a = 2;
    // cout << *a << endl;
    // delete a;
    // int b = 5;
    // a = &b;
    // cout << *a << endl;

    // data / content of pointer --> constant
    // Pointer itself can be reassign
    const int *a = new int(2); // --> const data, non-const pointer
    // int const* a = new int(2); same as above line
    cout << *a << endl;
    // *a = 20; can't change the content of pointer.
    // cout << *a << endl;

    int b = 20;
    a = &b; // pointer itself can be reassigned.
    cout << *a << endl;

    // const pointer, but non-const data
    int *const c = new int(2);
    cout << *c << endl;
    *c = 20; // chal jayega
    cout << *c << endl;
    int d = 50;
    // c = &d; nhi chalega

    // const pointer, const data
    const int *const e = new int(10);
    cout << *e << endl;
    // *e = 88; // not possible
    // int f = 77;
    // e = &f;
    return 0;
}

// If I write const before '*', then, content will be const.