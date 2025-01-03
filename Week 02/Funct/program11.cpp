#include <iostream>
using namespace std;

int printMaximum(int n1, int n2, int n3)
{
    int ans1 = max(n1, n2);
    int finalAns = max(ans1, n3);
    return finalAns;
}

// max is pre-defined function (inbuilt)

int main()
{
    int maximum = printMaximum(3, 30, 100);
    cout << "Maximum is: " << maximum << endl;
    return 0;
}