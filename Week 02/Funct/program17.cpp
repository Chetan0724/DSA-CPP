#include <iostream>
using namespace std;

// return true --> If N is a prime no.
// return false --> If N is not a prime no.

bool checkPrime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            // remainder = 0 --> perfectly divisible
            // not a prime number
            return false;
            // return 0;
        }
    }
    // yaha par main keh skta hun ki
    return true;
    // return 1;
}

int main()
{
    bool prime = checkPrime(8);
    if (prime)
    {
        cout << "Its a prime number" << endl;
    }
    else
    {
        cout << "Its not a prime number" << endl;
    }
    return 0;
}