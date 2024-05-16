#include <iostream>
using namespace std;

int sum(int n)
{
    // Base case
    if (n == 1)
    {
        return 1;
    }

    int ans = n + sum(n - 1);
    return ans;
}

int main()
{
    cout << sum(5) << endl;
    return 0;
}