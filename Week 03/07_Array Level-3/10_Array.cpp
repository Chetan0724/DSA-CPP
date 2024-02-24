#include <iostream>
#include <limits.h>
using namespace std;

int finddiagSum(int arr[][4], int row, int col) {

    // Without col parameter --> Run
    
    int sum = 0;
    for (int i = 0; i < row; i++)
    {
        sum = sum + arr[i][i];
    }
    cout << sum;
}

int main()
{
    // Diagonal wise sum (Babbar Sir)

    int arr[4][4] = {
                    {1, 2, 3, 4},
                    {5, 6, 7, 8},
                    {9, 70, 11, 12},
                    {12, 34, 56, 45}
                    };

    int row = 4;
    int col = 4;
    finddiagSum(arr, row, col);

    return 0;
}