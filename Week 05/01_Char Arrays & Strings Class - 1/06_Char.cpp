#include <iostream>
#include <string.h>
using namespace std;

bool checkPalindrome(char ch[], int n) {
    // n -> Length of string

    int i = 0;
    int j = n - 1;

    while (i <= j)
    {
        if (ch[i] == ch[j])
        {
            i++;
            j--;
        }
        else
        {
            return false;
        }
        
    }
    return true;
}

int main()
{
    // Check Palindrome

    char ch[100];
    cin.getline(ch, 100);
    int len = strlen(ch);

    bool isPalindrome = checkPalindrome(ch, len);

    if (isPalindrome)
    {
        cout << "Valid Palindrome" << endl;
    }
    else {
        cout <<"Invalid Palindrome" << endl;
    }

    return 0;
}