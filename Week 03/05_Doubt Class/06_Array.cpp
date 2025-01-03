#include <iostream>
using namespace std;

void segregate0and1(int arr[], int n){
    int l = 0;
    int h = n - 1;
    
    while (l < h)
    {
        if (arr[l] == 0)
        {
            l++;
        }

        else if (arr[h] == 1)
        {
            h--;
        }

        else
        {
            swap(arr[l++], arr[h--]);
        }
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