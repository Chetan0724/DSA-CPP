#include <iostream>
using namespace std;

int main()
{
    int a = 2;
    int b = 3;
    cout << (a & b) << endl;
    int c = 5;
    int d = 10;
    cout << (c & d) << endl;
    cout << (c | d) << endl;

    int num = 1;
    cout << ~num << endl;
    cout << (~num) << endl;
    cout << ~(num) << endl;

    bool car = 1;
    cout << ~num << endl;
    cout << (~num) << endl;
    cout << ~(num) << endl;

    int m = 5;
    int n = 5;
    cout << (m ^ n) << endl;

    int x = 5;
    int y = 10;
    cout << (x ^ y) << endl;

    int p = 5;
    int o = -5;
    cout << (p ^ o) << endl;

    int g = 7;
    int ans = (g << 1);
    int ans2 = (g << 2);
    cout << ans << endl;
    cout << ans2 << endl;

    int s = 5;
    int ans3 = (s >> 1);
    cout << ans3 << endl;

    int k = 100;
    int ans4 = (k >> 2);
    cout << ans4 << endl;

    int r = -100;
    int ans5 = (k >> 1);
    cout << ans5 << endl;

    unsigned int w = -100;
    cout << (w >> 1);

    int t = 10;
    cout << (t << -1);
    // No Error, Warning, Garbage Value

    return 0;
}