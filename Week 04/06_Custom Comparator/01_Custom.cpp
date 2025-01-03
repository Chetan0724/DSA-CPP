#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void print(vector<int> &v) {
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

bool mycomp(int&a, int&b) {
    // return a < b; Increasing Order Sorting
    return a > b; // Decreasing Order Sorting
}

void printvv(vector<vector<int>> &vnew) {
    for (int i = 0; i < vnew.size(); ++i)
    {
        vector<int> &temp = vnew[i];
        int a = temp[0];
        int b = temp[1];
        cout << a << " " << b << endl;
    }
    cout << endl;
}

int main()
{
    vector<int> v = {44, 55, 22, 11, 33};
    sort(v.begin(), v.end()); // Increasing Order Sorting
    sort(v.begin(), v.end(), mycomp);
    print(v);

    // Vector of Vector Sorting
    vector<vector<int>>vnew;
    int n;
    cout << "Enter size:\n";
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        int a, b;
        cout << "Enter a, b" << endl;
        cin >> a >> b;
        vector<int>temp;
        temp.push_back(a);
        temp.push_back(b);
        vnew.push_back(temp);
    }

    cout << "Here are the Values" << endl;
    printvv(vnew);
    cout << "Sorted by 1st index" << endl;
    sort(vnew.begin(), vnew.end(), mycompfor1stIndex);
    printvv(vnew);
    return 0;
}