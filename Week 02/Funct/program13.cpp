#include <iostream>
using namespace std;

void checkEvenOdd(int num)
{
    if (num % 2 == 0)
    {
        cout << "Even Number" << endl;
    }
    else
    {
        cout << "Odd Number" << endl;
    }
}

int main()
{
    checkEvenOdd(5);
    return 0;
}