#include <iostream>
using namespace std;

void printName(string name)
{
    for (int i = 0; i < 5; i++)
    {
        cout << name << endl;
    }
}

int main()
{
    printName("Virat");
    printName("Dhoni");
    printName("Sachin");
    printName("Rahul");
    printName("Kuldeep");

    return 0;
}