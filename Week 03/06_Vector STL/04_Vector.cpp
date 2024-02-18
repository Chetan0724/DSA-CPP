#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> v) {
    int size = v.size();
    for (int i = 0; i < size; i++)
    {
        cout << v.at(i) << endl;
    }
}

int main()
{
    // Vector Initialization
    vector<int> arr;
    vector<int> arr2(5, -1);
    arr2.push_back(50);
    print(arr2);

    vector<int> arr3 = {1, 2, 3, 4, 5};
    arr3.pop_back();
    print(arr3);

    vector<int> arr4{1, 2, 3, 4};
    print(arr4);

    // Copy Vector
    vector<int> arr5 = {11, 21, 31, 41, 51};
    vector<int> arr6(arr5);
    print(arr6);
    
    return 0;
}