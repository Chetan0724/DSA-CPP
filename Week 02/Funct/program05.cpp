#include <iostream>
using namespace std;

void printSum(int a, int b, int c)
{
    int answer = a + b + c;
    cout << "Sum is: " << answer << endl;
}

int main()
{
    printSum(1, 2, 7);
    return 0;
}