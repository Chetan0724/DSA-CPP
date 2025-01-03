#include <iostream>
using namespace std;

void printCounting(int n)
{
    for (int i = 1; i <= n; i++)
    {
        cout << i << endl;
    }
}

int main()
{
    printCounting(10);
    return 0;
}