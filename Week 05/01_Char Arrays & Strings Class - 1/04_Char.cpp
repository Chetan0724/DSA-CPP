#include <iostream>
using namespace std;

void convertToUpperCase(char ch[]) {
    int index = 0;

    while (ch[index] != '\0')
    {
        if (ch[index] >= 'a' && ch[index] <= 'z')
        {
            ch[index] = ch[index] - 'a' + 'A';
        }
        index++;
    }
}

int main()
{
    // Convert to Uppercase

    char ch[100];
    cin.getline(ch, 100);
    cout << "Before: " << ch;
    convertToUpperCase(ch);
    cout << endl <<  "After: " << ch << endl;

    return 0;
}