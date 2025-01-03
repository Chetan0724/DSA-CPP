#include <iostream>
using namespace std;

void mergeSort(int arr[], int size, int s, int e) {
    int mid = (s+e)/2;
    int leftSize = mid - s + 1;
    int rightSize = e - mid;
    int arrLeft[10];
    int arrRight[10];
}

int main()
{
    int arr[] = {2, 1, 6, 9, 4, 5};
    int size = 6;
    int s = 0;
    int e = size - 1;
    mergeSort(arr, size, s, e);
    return 0;
}