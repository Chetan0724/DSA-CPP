#include <iostream>
using namespace std;

int main()
{
    string que1 = "What is your name?";
    string ans1 = "My name is Chetan Yadav.";
    string que2 = "How are you?";
    string ans2 = "I'm fine.";
    string que;

    cout << "Ask me a question: ";
    getline(cin, que);

    if (que == que1)
    {
        cout << ans1;
    }
    else if (que == que2)
    {
        cout << ans2;
    }
    else
    {
        cout << "I don't know the answer to that question.";
    }

    return 0;
}