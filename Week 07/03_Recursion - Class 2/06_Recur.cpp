// Find Maximum in an Array

#include <iostream>
#include <limits.h>
using namespace std;

void findMax(int arr[], int size, int index, int &maxValue) {
    // Base Case
    if (index >= size)
    {
        return;
    }
    
    // Processing
    maxValue = max(maxValue, arr[index]);

    // Recursive Call
    findMax(arr, size, ++index, maxValue);
}

int main()
{
    int arr[] = {11, 9, 10, 35, 113};
    int size = 5;
    int index = 0;
    int maxValue = INT_MIN;
    findMax(arr, size, index, maxValue);
    cout << "Maximum number is: " << maxValue;
    return 0;
}