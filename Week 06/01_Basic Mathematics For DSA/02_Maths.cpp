// *Chetan*

#include <iostream>
#include <math.h>
using namespace std;

bool isPrime(int num)
{
    // int sqrtN = sqrt(num);
    // for (int i = 2; i <= sqrtN; i++)
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int countPrimes(int n)
{
    int count = 0;
    for (int i = 2; i < n; i++)
    {
        if (isPrime(i))
        {
            ++count;
        }
    }
    return count;
}

int main()
{
    cout << "Total number of primes less than given number is: " << countPrimes(10) << endl;
    return 0;
}