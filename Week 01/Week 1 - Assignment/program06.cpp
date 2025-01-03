#include <iostream>
using namespace std;

int main()
{
    // Print counting from n to 1

    int n;
    cout << "Enter a number" << endl;
    cin >> n;
    for (int i = n; i >= 1; i--)
    {
        cout << i;
        cout << endl;
    }

    return 0;
}