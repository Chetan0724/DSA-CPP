// Print index of Target

#include <iostream>
using namespace std;

void printIndex(int arr[], int size, int index, int target)
{
    // Base Case
    if (index >= size)
    {
        return;
    }

    // Processing
    if (arr[index] == target)
    {
        cout << index << " ";
    }

    // Recursive Call
    printIndex(arr, size, index + 1, target);
}

int main()
{
    int arr[] = {10, 20, 30, 30, 50, 40, 30};
    int size = 7;
    int index = 0;
    int target = 30;
    printIndex(arr, size, index, target);
    return 0;
}