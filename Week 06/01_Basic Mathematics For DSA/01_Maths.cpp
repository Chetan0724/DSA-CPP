#include <iostream>
using namespace std;

int fastExponentiation(int a, int b)
{
    int ans = 1;
    while (b > 0)
    {
        if (b & 1)
        {
            // odd
            ans = ans * a;
        }
        a = a * a;
        b >>= 1; // b = b / 2
    }
    return ans;
}

// TC --> O(logb)

int slowExponentiation(int a, int b)
{
    int ans = 1;
    for (int i = 0; i < b; ++i)
    {
        ans *= a;
    }
    return ans;
}

// TC --> O(b)

int main()
{
    cout << slowExponentiation(5, 4) << endl;
    cout << fastExponentiation(5, 4) << endl;
    return 0;
}