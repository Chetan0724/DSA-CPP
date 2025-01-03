#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 1 ; j++)
        {
            cout << i + 1;
        }
        for (int j = 0; j < i; j++)
        {
            cout << "* " << i + 1;
        }
        
        cout << endl;
    }
    
    return 0;
}