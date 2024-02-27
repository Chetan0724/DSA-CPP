#include <iostream>
using namespace std;

void ShiftArray(int arr[], int k, int size) {
    int temp[k-1];
    int tempone = size;
    for (int i = (k-1); i >= 0; i--)
    {
        temp[i] = arr[tempone-1];
        tempone--;
    }
    for (int i = size-1; i >= (0 + k); i--)
    {
        arr[i] = arr[i-k];
    }
    for (int i = 0; i < k; i++)
    {
        arr[i] = temp[i];
    }
}

int main()
{
    // Shift Arrays element by k

    int arr[] = {10, 20, 30, 40, 50, 60};
    int size = 6;
    int k = 4;
    ShiftArray(arr, k, size);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}