#include <iostream>
using namespace std;

int indexofTarget(int arr[], int size, int index, int target)
{
    // Base Case
    if (index >= size)
    {
        return -1;
    }

    // Processing
    if (arr[index] == target)
    {
        return index;
    }

    // Recursive Call
    int ansone = indexofTarget(arr, size, index + 1, target);
    return ansone;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int size = 5;
    int index = 0;
    int target = 30;
    cout << "Index of Target is: " << indexofTarget(arr, size, index, target);
    return 0;
}