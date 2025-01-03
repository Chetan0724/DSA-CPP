#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    ++x;
    cout << x << endl;

    int y = 10;
    y++;
    cout << y << endl;

    int a = 21;
    cout << ++a << endl;
    cout << a++ << endl;
    cout << a << endl;

    int b = 10;
    cout << (++b) * 10 << endl;
    cout << (b++) * 10 << endl;
    cout << b << endl;

    int c = 10;
    cout << ((++c) * (c++)) << endl;
    // output is 121/132 why?

    int d = 10;
    cout << ((d++) * (++d)) << endl;
    // output is 120

    int g = 10;
    cout << (--g) * 10 << endl;

    int h = 10;
    cout << (h--) * 10 << endl;

    return 0;
}