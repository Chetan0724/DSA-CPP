#include <iostream>
using namespace std;

void replaceCharacter(char ch[]) {
    int index = 0;

    while (ch[index] != '\0')
    {
        if (ch[index] == '@')
        {
            ch[index] = ' ';
        }
        index++;
    }   
}

int main()
{
    // Replace @ with space

    char ch[100];
    cin.getline(ch, 100);
    cout << "Before: " << ch << endl;
    replaceCharacter(ch);
    cout << "After: " << ch << endl;

    return 0;
}