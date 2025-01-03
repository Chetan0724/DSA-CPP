#include <iostream>
using namespace std;

void findSumEvenUptoN(int n)
{
    int sum = 0;
    for (int i = 2; i <= n; i = i + 2)
    {
        sum = sum + i;
    }
    cout << "Final Sum: " << sum << endl;
}

int main()
{
    findSumEvenUptoN(10);
    return 0;
}