#include <iostream>
using namespace std;

int main()
{
    int firstValue = 0;
    int secondValue = 1;
    int ans;
    for (int i = 0; i < 10; i++)
    {
        ans = firstValue + secondValue;
        cout << ans << endl;
        firstValue = secondValue;
        secondValue = ans;
    }
    return 0;
}