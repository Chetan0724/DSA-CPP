// Input: Array Double each number

#include <iostream>
using namespace std;

void doubleValue(int arr[], int size, int index)
{
    // Base Case
    if (index >= size)
    {
        return;
    }
    // Processing
    arr[index] = arr[index] * 2;

    // Recursive Call
    doubleValue(arr, size, index + 1);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;
    int index = 0;
    doubleValue(arr, size, index);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}