#include <iostream>
using namespace std;

void reverseArray(int arr[], int size) {
    for (int left = 0, right = size - 1; left <= right; left++, right--)
    {
        swap(arr[left], arr[right]);
    }
    
    /*
    int left = 0;
    int right = size - 1;

    while (left <= right)
    {
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
   */
    
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void reverseOddArray(int arrNum[], int sizeNum) {
    int left = 0;
    int right = sizeNum - 1;
    while (left < right)
    {
        swap(arrNum[left], arrNum[right]);
        left++;
        right--;
    }
    for (int i = 0; i < sizeNum; i++)
    {
        cout << arrNum[i] << " ";
    }
}

int main()
{
    int arr[6] = {10, 20, 30, 40, 50, 60};
    int size = 6;
    reverseArray(arr, size);

    int arrNum[7] = {1, 2, 3, 4, 5, 6, 7};
    int sizeNum = 7;
    reverseOddArray(arrNum, sizeNum);
    return 0;
}