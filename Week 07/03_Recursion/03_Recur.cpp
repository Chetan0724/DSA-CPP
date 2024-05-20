// Search in an Array

#include <iostream>
using namespace std;

bool searchElement(int arr[], int size, int index, int target)
{
    // Base Case
    if (index >= size)
    {
        return false;
    }

    if (arr[index] == target)
    {
        return true;
    }

    // Recursive
    // searchElement(arr, size, index + 1, target);

    bool aageKaAns = searchElement(arr, size, index + 1, target);
    return aageKaAns;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int size = 5;
    int index = 0;
    int target = 30;
    cout << "Target found or not: " << searchElement(arr, size, index, target);
    return 0;
}