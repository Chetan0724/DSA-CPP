#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;

    int n = num / 2;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n - row - 1; col++)
        {
            cout << " ";
        }
        for (int col = 0; col < row + 1; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < (n - i); j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}