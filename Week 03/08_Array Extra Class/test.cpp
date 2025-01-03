#include <iostream>
using namespace std;

int main()
{
    int arr[9] = {2, 6, 4, 9, 3, 5, 7, 0, 1};
    int n = 9;
    bool chetan;
    for (int j = n; j >= 0; j--)
    {
        for (int i = 0; i < n; i++)
        {
            if (j == arr[i])
            {
                chetan = true;
                break;
            }
            chetan = false;
        }
        if (chetan == false)
        {
            cout << j << endl;
        }   
    }
    
    // O(n^2) --> By Linear Search
    // O(nlogn) --> By sorting
    // O(n) --> By addition
    
    return 0;
}