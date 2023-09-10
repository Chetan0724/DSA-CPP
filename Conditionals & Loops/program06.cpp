#include <iostream>
using namespace std;

int main()
{
    // for (int i = 10; i <= 12; i = i + 1)
    // {
    //     cout << "Chetan" << endl;
    // }

    // for (int i = 2; i < 10; i = i + 2)
    // {
    //     cout << i << endl;
    // }

    // for (int i = 10; i >= 0; i = i - 3)
    // {
    //     cout << i << endl;
    // }

    // for (int i = 0; i < 5; i = i + 1)
    // {
    //     cout << "A" << endl;
    // }

    for (int i = 0; i < 3; i = i + 1)
    {
        cout << "Outer Loop " << i << endl;
        for (int j = 0; j < 3; j = j + 1)
        {
            cout << "Inner Loop " << j << endl;
        }
        cout << endl;
    }

    return 0;
}