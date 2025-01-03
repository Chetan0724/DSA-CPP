#include <iostream>
using namespace std;

void printMaximum(int n1, int n2, int n3)
{
    int ans1 = max(n1, n2);
    int finalAns = max(ans1, n3);
    cout << "final ans is: " << finalAns << endl;
}

int main()
{
    printMaximum(354, 30, 1);
    return 0;
}