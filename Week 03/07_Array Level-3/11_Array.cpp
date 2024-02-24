#include <iostream>
#include <limits.h>
using namespace std;

int findDiagTwoSum(int arr[][4], int row, int col) {

    int sum = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i + j == 3)
            {
                sum = sum + arr[i][j];
            }
        }
    }
    cout << sum;
}

int main()
{
    // Second Diagonal wise sum (Chetan)

    int arr[4][4] = {
                    {1, 2, 3, 4},
                    {5, 6, 7, 8},
                    {9, 70, 11, 12},
                    {12, 34, 56, 45}
                    };

    int row = 4;
    int col = 4;
    findDiagTwoSum(arr, row, col);

    return 0;
}