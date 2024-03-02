#include <iostream>
using namespace std;

int countSetBit(int n){
    int count = 0;
    while(n){
        int bit = (n & 1);
        if(bit == 1) count++;
        n >>= 1;
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