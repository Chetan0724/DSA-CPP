#include <iostream>
using namespace std;

int factorial(int n)
{
    // base case
    if (n == 1)
        return 1;

    if (n == 0)
        return 1;

    // recursive relation
    int recursionAns = factorial(n - 1);

    // processing
    int finalAns = n * recursionAns;
    return finalAns;
}

int main()
{
    cout << factorial(5) << endl;
    return 0;
}