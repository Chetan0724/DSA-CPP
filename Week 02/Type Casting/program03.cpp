#include <iostream>
using namespace std;

int main()
{
    double pi = 3.14159265;
    int intpi = (int)pi;
    cout << intpi << endl;

    float floatingnumber = 65.35;
    char charvalue = (char)floatingnumber;
    cout << charvalue << endl;

    float a = 10;
    int b = 3.0;
    float c = a / b;
    cout << c << endl;

    int a = 10;
    float b = 3.0;
    float c = a / b;
    cout << c << endl;

    int a = 10;
    int b = 3.0;
    float c = a / ((float)b);
    cout << c << endl;

    int a = 10;
    int b = 3.0;
    float c = ((float)a) / b;
    cout << c << endl;

    return 0;
}