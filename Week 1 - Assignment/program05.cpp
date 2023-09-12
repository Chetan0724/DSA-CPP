#include <iostream>
using namespace std;

int main()
{
    // Find factorial of a number

    int n;
    cout << "Enter Number" << endl;
    cin >> n;
    int ans = 1;
    if (n >= 1)
    {
        for (int i = 1; i <= n; i++)
        {
            ans = ans * i;
        }
        cout << ans;
    }
    else
    {
        cout << "Please Enter positve number";
    }

    return 0;
}