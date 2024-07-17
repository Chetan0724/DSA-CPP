// **count++ vs ++count**

#include <iostream>
using namespace std;

void printValue(int val) {
    cout << "Value: " << val << endl;
}

int main()
{
    int count = 5;
    int resultOne = count++;
    cout << resultOne << " " << count << endl;

    count = 5;

    int resultTwo = ++count;
    cout << resultTwo << " " << count << endl;

    count = 5;
    printValue(count++);
    count = 5;
    printValue(++count);

    count = 0;
    while (count++ < 3)
    {
        cout << "Count: " << count << endl;
    }

    count = 0;
    while (++count < 3)
    {
        cout << "Count: " << count << endl;
    }
    
    return 0;
}