#include <iostream>
using namespace std;

void extremePrint(int arr[], int size) {
    int left = 0;
    int right = size - 1;

    while (left <= right)
    {
        cout << arr[left] << endl;
        cout << arr[right] << endl;
        left++;
        right--;
    }
}

int main()
{
    int arr[6] = {10, 20, 30, 40, 50, 60};
    int size = 6;
    
    extremePrint(arr, size);
    return 0;
}