#include <iostream>
using namespace std;

int main()
{
    // Strings

    // String vs Char Array (HW)

    // Creation
    string name;

    // input
    // cin >> name;
    getline(cin, name);

    // print
    cout << "Printing name: " << name << endl;

    cout << name[0] << endl;

    int index = 0;
    while (name[index] != '\0')
    {
        cout << "Index: " << index << " Character: " << name[index] << endl;
        index++;
    }
    
    cout << "Printing index 6 value: " << name[6] << endl;
    int value = (int)name[6];
    cout << "Value: " << value << endl;

    return 0;
}