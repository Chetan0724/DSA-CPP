#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> v) {
    cout << "Printing: " << endl;
    int size = v.size();
    for (int i = 0; i < size; i++)
    {
        // cout << v[i] << endl;
        cout << v.at(i) << endl;
    }

    // for(auto it:v) {
    //     cout << it << " ";
    // }
}

int main()
{
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        int d;
        cin >> d;
        v.push_back(d);
    }
    
    print(v);

    for (int i = 0; i < 10; ++i)
    {
        v.push_back(8);
    }
    
    print(v);

    // Clear vector

    v.clear();
    v.push_back(5);
    print(v);

    return 0;
}