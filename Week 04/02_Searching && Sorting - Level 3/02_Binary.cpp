#include <iostream>
using namespace std;

int getQuotient(int divisor, int dividend) {
    int s = 0;
    int e = dividend;
    int ans = -1;
    int mid = s + (e-s)/2;

    while(s <= e) {
        if (mid * divisor == dividend)
        {
            return mid;
        }

        if (mid * divisor < dividend)
        {
            ans = mid;
            s = mid + 1;
        }

        else
        {
            e = mid - 1;
        }
        
        mid = s + (e - s)/2;
    }
    return ans;
}

int main()
{
    // i/p --> 2 number --> Divide --> Binary Search
    // 29/7 --> 4.14 --> 4
    // Search Space --> [0 to dividend]

    // For Both positive and negative numbers

    int divisor = 7;
    int dividend = 29;

    int ans = getQuotient(abs(divisor), abs(dividend));

    if ((divisor > 0 && dividend < 0) || (divisor < 0 && dividend > 0))
    {
        ans = 0 - ans;
    }
    
    cout << "Final Ans is: " << ans << endl;

    return 0;
}