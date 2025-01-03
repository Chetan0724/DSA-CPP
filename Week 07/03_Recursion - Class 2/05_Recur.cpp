#include <iostream>
#include <vector>
using namespace std;

void Solve(int arr[], int size, int index, vector<int> &ans)
{
    // Base Case
    if (index >= size)
    {
        return;
    }

    // Processing
    if (arr[index] % 2 == 0)
    {
        ans.push_back(arr[index]);
    }

    // Recursive Call
    Solve(arr, size, index + 1, ans);
};

int main()
{
    int arr[] = {10, 11, 13, 14, 18, 19};
    int size = 6;
    int index = 0;
    vector<int> ans;
    Solve(arr, size, index, ans);

    // Printing vector

    // For each loop

    for (int num : ans)
    {
        cout << num << " ";
    }

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
};