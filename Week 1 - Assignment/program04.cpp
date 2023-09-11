#include <iostream>
using namespace std;

int main()
{
    // Print Max of three numbers

    int a, b, c;
    cin >> a >> b >> c;
    if (a > b && a > c)
    {
        cout << "Max is a:" << a;
    }
    else if (b > a && b > c)
    {
        cout << "Max is b:" << b;
    }
    else
    {
        cout << "Max is c:" << c;
    }

    return 0;
}