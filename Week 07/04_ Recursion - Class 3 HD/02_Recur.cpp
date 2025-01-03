// Check Sorted in Asc Order
// Babbar Sir

// Size aur Index --> By ref bhi kar sakte hein

#include <iostream>
using namespace std;

// bool checkSorted(int arr[], int & size, int & index)
// bool checkSorted(int arr[], int & size, int index)
// bool checkSorted(int arr[], int size, int & index)
bool checkSorted(int arr[], int size, int index)
{
    // Base Case
    if (index >= size)
    {
        return true;
    }

    // Processing
    if (arr[index] > arr[index - 1])
    {
        // Ab Aage Check Krna Padega Aur Recursion Sambhalega
        bool aageKaAns = checkSorted(arr, size, index + 1);
        return aageKaAns;
    }
    else
    {
        // Sorted Nhi
        return false;
    }
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};
    int size = 6;

    // int arr[] = {10};
    // int size = 1;

    // int arr[] = {};
    // int size = 0;

    int index = 1;

    bool isSorted = checkSorted(arr, size, index);
    if (isSorted)
    {
        cout << "Array is Sorted" << endl;
    }
    else
    {
        cout << "Array is not Sorted" << endl;
    }
    return 0;
}