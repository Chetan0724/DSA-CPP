#include <iostream>
using namespace std;

void segregate0and1(int arr[], int n){
    int l = 0;
    int h = n - 1;
    
    while (l < h)
    {
        while (arr[l] == 0 && l < h)
        {
            l++;
        }

        while (arr[h] == 1 && l < h)
        {
            h--;
        }

        swap(arr[l], arr[h]);
        l++;
        h--;

    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
}

int main()
{
    int arr[5] = {1, 0, 1, 0, 0};
    int n = 5;
    segregate0and1(arr, n);
    return 0;
}