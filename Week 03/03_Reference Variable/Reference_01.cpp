#include <iostream>
using namespace std;

int main()
{
    int n = 5; // normal integer variable
    int &k = n; // k is a reference variable, referring to n (nick name given to n)
    int &c = n; // c is a reference variable, referring to n (nick name given to n)
    cout << "n: " << n << endl;
    cout << "k: " << k << endl;
    cout << "c: " << c << endl;

    k++;

    cout << "n: " << n << endl;
    cout << "k: " << k << endl;
    cout << "c: " << c << endl;

    // int &t = 6; error
    
    return 0;
}