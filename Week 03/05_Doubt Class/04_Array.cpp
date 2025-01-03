#include <iostream>
using namespace std;

void lowhigh(int arr[], int size) {
    int l = 0;
    int h = size - 1;
    while (l < h)
    {
        if (arr[l] == 0)
        {
            l++;
        }
        if (arr[h] == 1)
        {
            h--;
        }
        else{
            swap(arr[l], arr[h]);
        }
    }
    
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[10] = {1, 0, 0, 0, 0, 1, 1, 1, 0, 1};
    int size = 10;
    lowhigh(arr, size);
    
    return 0;
}