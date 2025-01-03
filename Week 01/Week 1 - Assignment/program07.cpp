#include <iostream>
using namespace std;

int main()
{
    // Find simple interest

    int P, R, T;
    cin >> P >> R >> T;
    int SI = (P * R * T) / 100;
    cout << SI << endl;

    return 0;
}