// Check Sorted in Asc Order
// Chetan Yadav

#include <iostream>
using namespace std;

bool SortedOrNot(int arr[], int size, int index)
{
    bool ans = true;
    // base case
    if (index >= size)
    {
        return ans;
    }
    if (arr[index] > arr[index + 1] && index + 1 < size)
    {
        ans = false;
        return ans;
    }
    SortedOrNot(arr, size, ++index);
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};
    int size = 6;


    // int arr[] = {};
    // int size = 0;


    // int arr[] = {10};
    // int size = 1;

    int index = 0;
    cout << SortedOrNot(arr, size, index);
    return 0;
}