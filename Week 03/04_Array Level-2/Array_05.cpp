#include <iostream>
using namespace std;

void ShiftArray(int arr[], int n) {
    int temp = arr[n-1];

    for (int i = n-1; i >= 1; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[0] = temp;
}

int main()
{
    // Shift Arrays element by 1

    int arr[] = {10, 20, 30, 40, 50, 60};
    int n = 6;
    
    ShiftArray(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}