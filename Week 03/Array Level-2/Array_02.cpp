#include <iostream>
using namespace std;

int main()
{
    // Print All Pairs
    
    int arr[] = {10, 20, 30};
    int n = 3;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i] << ", " << arr[j] << endl;
        }
    }

    // Pair Sum / Two Sum
    
    int arrnew[] = {1, 2, 3};
    int size = 3;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << arrnew[i] + arrnew[j] << endl;
        }
    }

    return 0;
}