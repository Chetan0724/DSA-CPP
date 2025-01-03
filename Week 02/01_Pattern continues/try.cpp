#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 4; i++)
    {
        cout << 1;
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 1 && i > 0; j++)
        {
            cout << i + 1;
        }
        cout << endl;
    }
    for (int i = 0; i < 5; i++)
    {
        cout << i + 1;
    }

    return 0;
}