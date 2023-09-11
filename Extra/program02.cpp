#include <iostream>
using namespace std;

int main()
{
    int num, power, ans = 1;

    cout << "Enter the number: ";
    cin >> num;

    cout << "Enter the power: ";
    cin >> power;

    for (int i = 0; i < power; i++)
    {
        ans *= num;
        // ans = ans * num;
    }

    cout << "Result: " << ans << endl;

    return 0;
}