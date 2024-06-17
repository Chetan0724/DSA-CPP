#include <iostream>
using namespace std;

int x = 2; // Global Variable

void fun()
{
    int x = 60;
    cout << x << endl;
    ::x = 40;
    cout << ::x << endl;
}

int main()
{
    x = 4; // OR ::x = 4;
    // Global x ko access kar raha h

    int x = 20; // Local to main() fn
    cout << x << endl;
    cout << ::x << endl; // Accessing Global with ::

    {
        int x = 50;
        {
            int x = 66;
            cout << x << endl;
        }
        cout << x << endl;
        cout << ::x << endl;
    }

    fun();
    return 0;
}