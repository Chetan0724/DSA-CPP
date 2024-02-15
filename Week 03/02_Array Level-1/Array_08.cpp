#include <iostream>
using namespace std;

int main()
{
    int arr[10];
    int n = 10;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter the element of index " << i << ": ";
        cin >> arr[i];
        arr[i] = 2 * arr[i];
    }

    cout << "Array:";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}