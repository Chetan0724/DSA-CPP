#include <iostream>
using namespace std;

int getUniue(int arr[], int n) {
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = ans^arr[i];
    }
    return ans;
}

int main()
{
    // Find Unique Element
    
    int arr[] = {2, 10, 11, 10, 2, 13, 15, 13, 15};
    int n = 9;
    int finalAns = getUniue(arr, n);
    cout << "Final answer is: " << finalAns << endl;

    return 0;
}