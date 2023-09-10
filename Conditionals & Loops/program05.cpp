#include <iostream>
using namespace std;

int main()
{
    int num = 10;

    if (num > 0)
    {
        cout << "Positive " << endl;
    }
    else if (num < 0)
    {
        cout << "negative" << endl;
    }
    else
    {
        cout << "zero" << endl;
    }
    
    return 0;
}