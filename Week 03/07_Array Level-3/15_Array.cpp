#include <iostream>
#include <limits.h>
#include <vector>
using namespace std;

int main()
{
    vector<int> arrOne;
    vector<int> arrTwo(5);
    vector<int> arr(5, 10);

    cout << "Size of vector: " << arr.size();

    cout << endl << "Printing vector" << endl;

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    
    cout << endl;
    
    arr.push_back(4);
    arr.push_back(14);
    arr.push_back(24);

    cout << arr.empty() << endl;
    
    return 0;
}