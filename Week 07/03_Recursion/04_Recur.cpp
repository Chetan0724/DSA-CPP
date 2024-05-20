// Find minimum in an Array

#include <iostream>
#include <limits.h>
using namespace std;

int minNum(int arr[], int size, int index, int minNo)
{
    // Base Case
    if (index >= size)
    {
        return minNo;
    }

    // Processing
    minNo = min(minNo, arr[index]);

    // Recursive Call
    minNum(arr, size, index + 1, minNo);
}

int main()
{
    int arr[] = {10, 9, 8, 11, 1, 12};
    int size = 6;
    int index = 0;
    // int minNo = arr[1];
    int minNo = INT_MAX;
    cout << "Minimum number is: " << minNum(arr, size, index, minNo);
    return 0;
}


// Find minimum in an Array

/*
#include <iostream>
#include <limits.h>
using namespace std;

void minNum(int arr[], int size, int index, int &minNo)
{
    // Base Case
    if (index >= size)
    {
        return;
    }

    // Processing
    minNo = min(minNo, arr[index]);

    // Recursive Call
    minNum(arr, size, index + 1, minNo);
}

int main()
{
    int arr[] = {10, 9, 8, 11, 1, 12};
    int size = 6;
    int index = 0;
    // int minNo = arr[1];
    int minNo = INT_MAX;
    minNum(arr, size, index, minNo);
    cout << "Minimum number is: " << minNo << endl;
    return 0;
}
*/