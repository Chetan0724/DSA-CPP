#include <iostream>
using namespace std;

int main()
{
    // Even numbers btw 1 to 100

    // for (int i = 2; i<=100; i = i + 2)
    // {
    //     cout << i << endl;
    // }

    for (int i = 1; i<=100; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << endl;
        }
    }
    
    return 0;
}