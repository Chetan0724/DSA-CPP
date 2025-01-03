#include <iostream>
using namespace std;

// size bhejna acchi practice

void solve(int arr[], int size)
{
    cout << "Size of array inside function: " << sizeof(arr) << endl;
}

int main()
{
    // Pointer --> Functions

    int arr[] = {10, 20, 30, 40, 50};
    cout << "Size of array: " << sizeof(arr) << endl;
    solve(arr, 4);
    return 0;
}