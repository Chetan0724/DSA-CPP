#include <iostream>
using namespace std;

int findOddOccuringElement(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e-s)/2;

    while (s <= e)
    {
        if (s == e)
        {
            return s;
        }
        
        // mid & 1 --> true --> odd number

        if (mid & 1)
        {
            if (mid -1 >= 0 && arr[mid-1] == arr[mid])
            {
                s = mid + 1;
            }
            
            else
            {
                e = mid - 1;
            }
            
        }
        
        else
        {
            if (mid + 1 < n && arr[mid] == arr[mid + 1])
            {
                s = mid + 2;
            }
            
            else
            {
                e = mid;
            }
        }
        mid = s + (e-s)/2;
    }
    return -1;
}

int main()
{
    // Find the odd occuring element
    // all Element --> Even no of times occur except one --> odd
    // All repeating no --> pairs repeat & pairs are not repeated
    // Ek baar me koi bhi no 2 se jada baar nahi aa sakta
    // XOR --> O(n)
    // Not Sorted
    // example 1 --> {1, 1, 5, 5, 2, 2, 3, 3, 2, 4, 4}
    // example 2 --> {10, 10, 2, 2, 5, 5, 2, 5, 5, 20, 20, 11, 11, 10, 10}

    int arr[] = {10, 10, 2, 2, 3, 3, 2, 5, 5, 6, 6, 7, 7};
    int n = 13;

    int ansIndex = findOddOccuringElement(arr, n);

    cout << "Final Ans is: " << arr[ansIndex] << endl;

    return 0;
}