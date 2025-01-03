#include <iostream>
using namespace std;

// call by value --> bahut jyada space
// backtracking --> recursiv call se wapis aate waqt operations

void printPermutation(string &str, int index)
{
    // base case
    if (index >= str.length())
    {
        cout << str << " ";
        return;
    }

    for (int j = index; j < str.length(); j++)
    {
        swap(str[index], str[j]);
        // baki kaam recursion bhaiya
        printPermutation(str, index + 1);
        // backtracking
        swap(str[index], str[j]);
    }
}

int main()
{
    // Permutation of string
    
    string str = "abc";
    int index = 0;
    printPermutation(str, index);
    return 0;
}


// Time comp 4 toh n expone
// 1 --> 4 up down left right