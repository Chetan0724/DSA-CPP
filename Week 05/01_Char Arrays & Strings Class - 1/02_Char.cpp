#include <iostream>
#include <string.h>
using namespace std;

int findLength(char ch[]) {
    int index = 0;

    while (ch[index] != '\0')
    {
        index++;
    }
    return index;
}

/*

{
    int length = 0;

    for (int i = 0; i < size; i++)
    {
        if (ch[i] == '\0')
        {
            break;
        }
        else {
            length++;
        }
    }
    return length;
}

*/

int main()
{
    char ch[100];
    // cin >> ch;
    cin.getline(ch, 100);
    int len = findLength(ch);
    cout << "Length of string is: " << len << endl;

    cout << "Printing Length: " << strlen(ch) << endl;

    return 0;
}