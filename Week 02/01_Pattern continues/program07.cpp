#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < row; col++)
        {
            cout << " ";
        }
        int totalcol = n - row;
        for (int col = 0; col < totalcol; col++)
        {
            if (col == 0 || col == totalcol - 1)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}