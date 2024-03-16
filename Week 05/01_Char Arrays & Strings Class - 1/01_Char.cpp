#include <iostream>
using namespace std;

int main()
{
    // Creation
    char ch[10];
    
    // Input (For Loop)
    cin >> ch;

    // Print (For Loop)
    cout << "Printing the value of ch: " << ch << endl;

    // Access
    cout << ch[1] << endl;

    // Null Character --> Termination of String --> '\0' --> Ascii value --> 0

    // Printing using loop
    for (int i = 0; i < 10; i++)
    {
        cout << "At Index: " << i << " " << ch[i] << endl;
    }
    
    char temp = ch[6];
    int value = (int)temp;
    cout << "printing integer value: " << value << endl;

    char sent[100];
   // cin >> sent;
    cin.getline(sent, 100);
    cout << "Printing the value of sent: " << sent << endl;
    
    return 0;
}