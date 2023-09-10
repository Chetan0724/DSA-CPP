#include <iostream>
using namespace std;

int main()
{
    for (int row = 0; row < 5; row = row + 1)
    {
        for (int col = 0; col < 5; col = col + 1)
        {
            if (row == 0 || row == 4)
            {
                cout << "* ";
            }
            else
            {
                if (col == 0 || col == 4)
                {
                    cout << "* ";
                }
                else
                {
                    cout << "  ";
                }
            }
        }
        cout << endl;
    }
    
    return 0;
}