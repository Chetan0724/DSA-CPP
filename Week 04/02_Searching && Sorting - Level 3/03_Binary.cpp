#include <iostream>
using namespace std;

int searchNearlySorted(int arr[], int n, int target) {
    int s = 0;
    int e = n -1;
    int mid = s + (e-s)/2;

    while (s <= e)
    {
        if (mid - 1 >= 0 && arr[mid - 1] == target)
        {
            return mid - 1;
        }

        if (arr[mid] == target)
            return mid;

        if (mid + 1 < n && arr[mid+1] == target)
            return mid + 1;

        if (target > arr[mid])
        {
            // s = mid + 1;
            s = mid + 2;
        }

        else
        {
            // e = mid - 1;
            e = mid - 2;
        }
        mid = s + (e-s)/2;
    }
    return -1;
}

int main()
{
    // Binary Search on nearly sorted Array

    int arr[] = {20, 10, 30, 50, 40, 70, 60};
    int n = 7;
    int target = 60;

    int targetIndex = searchNearlySorted(arr, n, target);

    if(targetIndex == -1) {
        cout << "Element Not found" << endl;
    }
    else {
        cout << "Element found at Index: " << targetIndex << endl;
    }

    return 0;
}