#include <iostream>
#include <limits.h>
using namespace std;

int findMax(int arr[][4], int row, int col) {
    int maxAns = arr[0][0];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] > maxAns)
            {
                maxAns = arr[i][j];
            }
        }
    }
    return maxAns;
}

int findMin(int arr[][4], int row, int col) {
    int minAns = arr[0][0];
    
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if(arr[i][j] < minAns) {
                minAns = arr[i][j];
            }
        }
    }
    return minAns;
}

int main()
{
    // Max number in an Array

    int arr[3][4] = {
                    {11, 2, 3, 4},
                    {100, 6, -7, 8},
                    {9, 70, 1, 12}
                    };

    int row = 3;
    int col = 4;

    cout << "Printing the max no. : " << findMax(arr, row, col) << endl;
    cout << "Printing the min no. : " << findMin(arr, row, col);

    return 0;
}