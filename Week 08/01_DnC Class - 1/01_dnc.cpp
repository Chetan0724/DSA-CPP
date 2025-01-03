#include <iostream>
using namespace std;

// when an array is passed to a function in C++, it is passed by reference.

void merge(int arr[], int s, int e)
{
    // mid pehle se bhi le sakte hein
    int mid = (s + e) / 2;
    int lenLeft = mid - s + 1;
    int lenRight = e - mid;

    // Create left and right array

    int *left = new int[lenLeft];
    int *Right = new int[lenRight];

    // copy values from origin array to left array

    int k = s;
    // k --> starting index of left array values in original array

    for (int i = 0; i < lenLeft; i++)
    {
        left[i] = arr[k];
        k++;
    }

    // copy values from origin array to right array

    k = mid + 1;
    for (int i = 0; i < lenRight; i++)
    {
        Right[i] = arr[k];
        k++;
    }

    // Actual merge logic
    // left array is already sorted
    // right array is already sorted

    int leftIndex = 0;
    int rightIndex = 0;
    // yahi par galti karoge
    int mainArrayIndex = s;

    while (leftIndex < lenLeft && rightIndex < lenRight)
    {
        if (left[leftIndex] < Right[rightIndex])
        {
            arr[mainArrayIndex] = left[leftIndex];
            mainArrayIndex++;
            leftIndex++;
        }
        else
        {
            arr[mainArrayIndex] = Right[rightIndex];
            mainArrayIndex++;
            rightIndex++;
        }
    }

    // 1st case --> left array exhaust but right array me element abhi bhi bache hai

    while (rightIndex < lenRight)
    {
        arr[mainArrayIndex] = Right[rightIndex];
        mainArrayIndex++;
        rightIndex++;
    }

    // 2nd case --> right array exhaust but left array me element abhi bhi bache hai

    while (leftIndex < lenLeft)
    {
        arr[mainArrayIndex] = left[leftIndex];
        mainArrayIndex++;
        leftIndex++;
    }

    delete[] left;
    delete[] Right;
}

void mergeSort(int arr[], int s, int e)
{
    // base case
    if (s > e)
    {
        // invalid array
        return;
    }

    // single bhi kar sakte hein

    if (s == e)
    {
        // single element array
        return;
    }

    // break
    int mid = (s + e) / 2;
    // binary wala bhi chalega
    // s to mid --> left
    // mid + 1 to e --> right

    // recursion bhaiya ko bulao and left and right array ko sort karwao

    // recursive call for left array
    mergeSort(arr, s, mid);
    // recursive call for right array
    mergeSort(arr, mid + 1, e);

    // merge 2 sorted arrays
    merge(arr, s, e);
}

int main()
{
    int arr[] = {2, 1, 6, 9, 4, 5};
    int size = 6;
    int s = 0;
    int e = size - 1;

    cout << "Before merge sort:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    mergeSort(arr, s, e);

    cout << "After merge sort:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}

// important que
// Inversion count
// hw

// hw
// inplace merge sort


// Time comp of merge sort
//  O(nlogn)

// hw
// find sc

// inplace memory means in cpp --> google