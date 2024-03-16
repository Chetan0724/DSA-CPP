#include <iostream>
using namespace std;

int main()
{
    string name;

    cin >> name;

    string temp = "";

    cout << "Length of String: " << name.length() << endl;
    cout << "String is empty or not: " << temp.empty() << endl;
    cout << "String is empty or not: " << name.empty() << endl;
    cout << name.at(0) << endl;
    cout << name.front() << endl;
    cout << name.back() << endl;

    string str1 = "Chetan";
    string str2 = "Yadav";

    str1.append(str2);

    cout << str1 << endl;
    cout << str2 << endl;

    string desc = "This is a car";
    desc.erase(4, 3);
    cout << desc << endl;

    string nameone = "Chetan Yadav";
    string middle = "Shyam ";

    nameone.insert(7, middle);
    cout << nameone << endl;

    string nametwo = "Chetan";
    nametwo.push_back('a');
    cout << nametwo << endl;
    nametwo.pop_back();
    cout << nametwo << endl;

    string strone = "Hey! my name is Chetan Yadav";
    string strtwo = "Chetan";

    if (strone.find(strtwo) == string::npos)
    {
        cout << "Not found" << endl;
    }
    else {
        cout << "Found" << endl;
    }

    string nameone1 = "Chetan";
    string nametwo2 = "Chetan";

    if (nameone1.compare(nametwo2) == 0)
    {
        cout << "Matching" << endl;
    }
    else {
        cout << "Not Matching" << endl;
    }

    string senone = "This is a car, big daddy of all suvs";
    cout << senone.substr(19, 5) << endl;

    return 0;
}