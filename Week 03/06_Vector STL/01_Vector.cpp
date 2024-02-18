#include <iostream>
using namespace std;

void fun(int a[], int n){
    cout << "Array elements are" << endl;
    for (int i = 0; i < n; ++i)
    {
        cout << a[i] << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    int * arr = new int[n];
    fun(arr, n); // Element zero or garbage

    for (int i = 0; i < n; ++i)
    {
        int data;
        cin >> data;
        arr[i] = data;
    }
    fun(arr, n);

    return 0;
}