#include <iostream>
using namespace std;

int findMissingNumber(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;

    while (start <= end)
    {
        if ((arr[end] - arr[mid]) !=(end - mid))
        {
            start = mid;
            mid = (start + end) / 2;
            if(start == mid)
                return ((arr[start] + arr[end] )/2);
        }
        else if ((arr[end] - arr[mid]) ==(end - mid))
        {
            end = mid;
            mid = (start + end) / 2;
            if(end == mid)
                return ((arr[start] + arr[end] )/2);;
        }
    }
    if (ans + 1 == 0)
    {
        return n + 1;
    }
    return -1;
}

int main()
{
    // Chetan
    
    int arr[] = {1,2, 3, 4, 5, 6, 7,8};
    int size = 8;
    int ans = findMissingNumber(arr, size);
    cout << ans;

    return 0;
}