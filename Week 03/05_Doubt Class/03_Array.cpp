#include <iostream>
using namespace std;

int countSetBit(int n){
    int count = 0;
    while(n) {
        n = n & (n - 1);
        count++;
    }
    return count;
}

int main()
{
    int n;
    cin >> n;
    cout << countSetBit(n) << endl;

    return 0;
}