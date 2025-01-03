#include <iostream>
using namespace std;

void printMaximum(int num1, int num2, int num3)
{
    if (num1 > num2 && num1 > num3)
    {
        cout << "Maximum is: " << num1 << endl;
    }
    else if (num2 > num1 && num2 > num3)
    {
        cout << "Maximum is: " << num2 << endl;
    }
    else
    {
        cout << "Maximum is: " << num3 << endl;
    }
}

int main()
{
    printMaximum(40, 8, 10);
    return 0;
}