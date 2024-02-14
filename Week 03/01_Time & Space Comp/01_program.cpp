#include <iostream>
using namespace std;

int main()
{
    int a = 0, b = 0, n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = n; j > i; j--)
        {
            cout << "Hi1\n";
        }   
    } // O(n^2)
    
    return 0;
}