#include <iostream>
#include <vector>
using namespace std;

/*

Optimising Sieve of Eratosthenes

1. Inner loop j = i * i ✔️
              j = i * 2 ❌

2. Outer loop i <= sqrt(n) ✔️
              i <= n ❌

*/

vector<bool> Sieve(int n)
{
    // Create a sieve array of N size telling isPrime.
    vector<bool> sieve(n + 1, true);
    sieve[0] = sieve[1] = false;

    for (int i = 2; i * i <= n; i++)
    {
        if (sieve[i] == true)
        {
            // int j = i * 2;
            int j = i * i;
            while (j <= n)
            {
                sieve[j] = false;
                j += i;
            }
        }
    }
    return sieve;
}

int main()
{
    vector<bool> sieve = Sieve(25);
    for (int i = 0; i <= 25; i++)
    {
        if (sieve[i])
        {
            cout << i << " ";
        }
    }
    return 0;
}

// T.C. nlog(logn)
// Best way