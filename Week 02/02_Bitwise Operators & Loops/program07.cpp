#include <iostream>
using namespace std;

int age = 25;

int main()
{
    // int a = 5; // Initialisation
    // int b;     // Declaration
    // a = 25;    // Updation
    // cout << a << endl;

    // int a = 10;
    // Error Redeclaration of a

    for (int i = 0; i < 5; i++)
    {
        cout << i << endl;
    }

    // cout << "Value of i is " << i << endl;
    //  i was not declared in this scope

    // if (true)
    // {
    //     int c = 25;
    //     cout << c << endl;
    // }
    // cout << c << endl;


    int a = 101;
    if (true)
    {
        cout << "Inside if number 1" << endl;
        // int a = 202;
        if (true)
        {
            cout << "Inside if number 2" << endl;
            // int a = 303;
            cout << a << endl;
        }
    }
    cout << age << endl;
    return 0;
}