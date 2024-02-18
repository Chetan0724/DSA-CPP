#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> v) {
    cout << "Printing: " << endl;
    int size = v.size();

    // int capacity = v.capacity();
    // cout << "capacity: " << capacity << endl;

    for (int i = 0; i < size; i++)
    {
        cout << v[i] << endl;
    }
}

int main()
{
    vector<char> alpha;
    alpha.push_back('a');
    alpha.push_back('b');
    alpha.push_back('c');

    cout << alpha[0] << endl;
    cout << alpha.front() << endl;
    cout << alpha[alpha.size() - 1] << endl;
    cout << alpha.back() << endl;

    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    print(v);

    // pop --> delete --> end
    v.pop_back();
    print(v);

    v.pop_back();
    print(v);

    v.pop_back();
    print(v);

    return 0;
}