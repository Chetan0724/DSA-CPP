#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5, 6};
    int k = 1;
    int sizeone = nums.size();

    for (int i = 0; i < k; i++)
    {
        int temp = nums[sizeone - 1];
        for (int j = sizeone; j > 0; j--)
        {
            nums[j] = nums[j - 1];
        }
        nums[0] = temp;
    }

    for (int i = 0; i < sizeone; i++)
    {
        cout << nums[i] << " ";
    }

    return 0;
}