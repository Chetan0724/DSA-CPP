#include <iostream>
using namespace std;

void printArray(int arr[][4], int row, int col) {
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    // 2D-Array --> Row and Column

    int arr[5][10];

    int arrtwo[2][4] = {{10, 20, 30, 40}, {80, 90, 100, 110}};

    int arrthree[3][5] = {
                         {1, 2, 3, 4, 5},
                         {10, 11, 12, 13, 14},
                         {15, 16, 17, 18, 19}
                         };

    cout << arrthree[0][0] << " ";
    cout << arrthree[0][1] << " ";
    cout << arrthree[0][2] << " ";
    cout << arrthree[0][3] << " ";
    cout << arrthree[0][4] << " ";
    cout << arrthree[1][0] << " ";
    cout << arrthree[1][1] << " ";
    cout << arrthree[1][2] << " ";
    cout << arrthree[1][3] << " ";
    cout << arrthree[1][4] << " ";
    cout << arrthree[2][0] << " ";
    cout << arrthree[2][1] << " ";
    cout << arrthree[2][2] << " ";
    cout << arrthree[2][3] << " ";
    cout << arrthree[2][4] << endl;

    int arrfour[3][4] = {
                        {1, 2, 3, 4},
                        {5, 6, 7, 8},
                        {9, 10, 11, 12}
                        };

    int arrfive[][4] = {
                       {14, 24, 43, 44},
                       {45, 64, 74, 84},
                       {94, 104, 114, 142}
                       };

/*
    int arrsix[3][] = {
                       {1, 2, 3, 4},
                       {5, 6, 7, 8},
                       {9, 10, 11, 12}
                       };

    int arrseven[][] = {
                      {1, 2, 3, 4},
                      {5, 6, 7, 8},
                      {9, 10, 11, 12}
                      };
*/

    int row = 3;
    int col = 4;
    printArray(arrfour, row, col);
    
    return 0;
}