#include <iostream>
using namespace std;

int main()
{
    int arr[4][5] = {
                    {1, 0, 1, 0, 0},
                    {1, 0, 1, 0, 1},
                    {1, 1, 1, 0, 0},
                    {0, 0, 1, 0, 1}
                    };
    int m = 4;
    int n = 5;
    int onecount = 0;
    int maxcount = 0;
    int rownum = 0;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] == 1)
            {
                onecount++;
                if (onecount > maxcount)
                {
                    rownum = i;
                    maxcount = onecount;
                } 
            }
        }
        onecount = 0;  
    }

    int arrnew[] = {rownum, maxcount};
    cout << arrnew[0] << " ";
    cout << arrnew[1];
    
    return 0;
}