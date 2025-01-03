#include <iostream>
using namespace std;

int main()
{
    int arr[3][3] = {
                    {1, 2, 3},
                    {4, 5, 6},
                    {7, 8, 9}
                    };

    int n = 3;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            // arr[i][j] = arr[j][n-1-i];
            // arr[j][n-1-i] = arr[i][j];
            arr[i][j] = arr[n-1-j][i];
            // swap(arr[i][j], arr[n-1-j][i]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}