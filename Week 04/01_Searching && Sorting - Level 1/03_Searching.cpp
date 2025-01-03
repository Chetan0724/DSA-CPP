#include <iostream>
using namespace std;

int findLastOccurence(int arr[], int n, int target) {
    int s = 0;
    int e = n - 1;
    int mid = (s + e)/2;

    // Best Practice --> Not Overflow
    // int mid = s + (e - s)/2;

    int ans = -1;

    while (s <= e)
    {
        if (arr[mid] == target)
        {
            ans = mid;
            s = mid + 1;
        }

        else if (target > arr[mid])
        {
            s = mid + 1;
        }

        else if (target < arr[mid])
        {
            e = mid - 1;
        }
        
        mid = (s + e)/2;
    }
    return ans;
}

int main()
{
    int arr[] = {30, 30, 30, 30, 30, 30, 70, 80, 90};
    int target = 30;
    int n = 9;

    int ansIndex = findLastOccurence(arr, n, target);
    cout << ansIndex;

    return 0;
}