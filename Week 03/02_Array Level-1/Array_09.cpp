#include <iostream>
using namespace std;

int main()
{
    int arr[10];
    int n = 10;

    cout << "Give Input: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        arr[i] = 2 * arr[i];
    }

    cout << "Double Value Array: ";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}