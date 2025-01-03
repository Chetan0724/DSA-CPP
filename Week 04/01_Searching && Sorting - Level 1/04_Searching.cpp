#include <iostream>
using namespace std;

int findfirstOccurence(int arr[], int n, int target) {
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s)/2;
    int ans = -1;

    while (s <= e)
    {
        if (arr[mid] == target)
        {
            ans = mid;
            e = mid - 1;
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

int findLastOccurence(int arr[], int n, int target) {
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s)/2;
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


int findTotalOccurence(int arr[], int n, int target) {
    int firstOcc = findfirstOccurence(arr, n, target);
    int lastOcc = findLastOccurence(arr, n, target);
    int total = lastOcc - firstOcc + 1;
    return total;
}

int main()
{
    int arr[] = {30, 30, 30, 30, 30, 30, 70, 80, 90};
    int target = 30;
    int n = 9;

    int ans = findTotalOccurence(arr, n, target);
    cout << "Total Occ is " << ans << endl;
    
    return 0;
}