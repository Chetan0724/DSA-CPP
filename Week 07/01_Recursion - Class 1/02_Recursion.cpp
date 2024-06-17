#include <iostream>
using namespace std;

void printCounting(int n)
{
    // base case
    if (n == 1)
    {
        cout << 1;
        return;
    }

    // processing
    cout << n << " ";

    // recursion call
    printCounting(n - 1);
}

int main()
{
    printCounting(5);
    return 0;
}


// Chetan Yadav

/*

#include <iostream>
using namespace std;

void printCounting(int num)
{
    Base Case
    if (num == 1)
    {
        cout << num << " ";
        return;
    }

    recursive call
    printCounting(num - 1);

    processing
    cout << num << " ";
}

int main()
{
    int num = 5;
    printCounting(num);
    return 0;
}

*/