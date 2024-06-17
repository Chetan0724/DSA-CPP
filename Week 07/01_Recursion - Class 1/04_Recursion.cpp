// Fibonacci Series :- 0, 1, 1, 2, 3, 5, 8, 13

#include <iostream>
using namespace std;

int fib(int n) {
    // base case
    if (n == 0)
    {
        return 0;
    }

    if (n == 1)
    {
        return 1;
    }

    int ans = fib(n-1) + fib(n-2);
    return ans;
}

int main()
{
    // Fibonacci Series

    cout << fib(0) << endl;
    return 0;
}