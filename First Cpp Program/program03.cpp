#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    int b = 10;
    cout << a + b << endl;
    cout << a - b << endl;
    cout << a * b << endl;
    cout << b / a << endl;
    cout << b % a << endl;
    cout << (a > b) << endl;
    cout << (a < b) << endl;
    cout << (a <= b) << endl;
    cout << (a >= b) << endl;
    cout << (a != b) << endl;
    cout << (a == b) << endl;
    int c = 3;
    int d = 2;
    cout << c / 2 << endl;

    int age = 20;
    int car = 12;
    if (age >= 18 && car >= 2)
    {
        cout << "Licence Milega" << endl;
    }

    int value = 12;
    int sum = 1;
    if (value >= 10 || sum >= 2)
    {
        cout << "Mission Successful" << endl;
    }

    cout << age << endl;
    cout << !age << endl;
    int truck = 0;
    cout << !truck << endl;
    return 0;
}