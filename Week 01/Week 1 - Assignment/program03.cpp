#include <iostream>
using namespace std;

int main()
{
    // Check given triangle is valid or not

    int a, b, c;
    cin >> a >> b >> c;
    if (a + b > c && b + c > a && c + a > b)
    {
        cout << "The given triangle is valid." << endl;
    }
    else
    {
        cout << "The given triangle is invalid." << endl;
    }

    return 0;
}