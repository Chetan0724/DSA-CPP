#include <iostream>
using namespace std;

void printArray(int arr[], int size, int index)

// void printArray(int *arr, int size, int index) * pointer

{
    // Base Case
    if (index >= size)
    {
        return;
    }

    // Processing
    cout << arr[index] << " ";

    // Recursive Call
    printArray(arr, size, index + 1);

    // Processing
    cout << arr[index] << " ";
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int size = 5;
    int index = 0;
    printArray(arr, size, index);
    return 0;
}