#include <iostream>
using namespace std;

int printSum(int a, int b, int c)
{
    int ans = a + b + c;
    return ans;
}

int main()
{
    int sum = printSum(4, 4, 5);
    cout << "Sum is: " << sum << endl;

    cout << "Sum is: " << printSum(4, 4, 5) << endl;

    return 0;
}