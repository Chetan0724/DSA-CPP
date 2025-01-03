#include <iostream>
#include <math.h>
using namespace std;

void print(int numb, int div)
{
    //Base Case
    if (div < 1)
    {
        return;
    }
    
    // Processing
    int num = int(numb / div);
    cout << num << " ";
    numb = numb - (num * div);
    div = div/10;

    // Recursive Relation
    print(numb, div);


    // 4215/1000 --> 4.215 --> 4
    // 4215 - 4000 = 215/100 --> 2.15 --> 2
    // 215 -200 = 15/10 --> 1.5 --> 1
    // 15-10= 5 --> 5 5
}

int main()
{
    int num = 4215;
    int div = 1000;
    print(num, div);
    return 0;
}