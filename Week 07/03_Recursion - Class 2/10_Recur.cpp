#include <iostream>
using namespace std;

vector<int> find(arr, size, index, target) {

}

// void function

int main()
{
    vector<int> ans;

    // Base Case
    if (index >= size)
    {
        return ans;
    }

    // Processing
    if (arr[index] == target)
    {
        ans.push_back(index);
    }
    
    // Recursive
    find(arr, size, index+1, target)
    
    return 0;
}