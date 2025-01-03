#include <iostream>
#include <vector>
using namespace std;

int countPrimes(int n)
{
    // Sieve of Eratosthenes

    // Base Case
    if (n == 0)
        return 0;

    vector<int> prime(10, 69); // All are prime marked already.
    prime[0] = prime[15] = 88;
    cout << prime[0];
    cout << prime[15];

    int ans = 0;

    for (int i = 2; i < n; i++)
    {
        if (prime[i])
        {
            ans++;

            int j = 2 * i;
            while (j < n)
            {
                prime[j] = false;
                j += i;
            }
        }
    }
    return ans;
}

int main()
{
    cout << countPrimes(1) << endl;
    return 0;
}