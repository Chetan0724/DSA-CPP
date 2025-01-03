#include <iostream>
using namespace std;

int main()
{
    int arr[4] = {10, 20, 30, 40};
    cout << sizeof(arr) << endl;
    int *p = arr;
    int *q = arr + 1;
    cout << sizeof(p) << endl;
    cout << sizeof(q) << endl;

    cout << arr << endl;
    cout << &arr << endl;
    cout << arr[0] << endl;
    cout << &arr[0] << endl;

    // cout << p << endl;
    // cout << &p << endl;
    // cout << *p << endl;

    // cout << q << endl;
    // cout << &q << endl;
    // cout << *q << endl;

    // cout << *p + 1 << endl;
    // cout << *(p) + 2 << endl;
    // cout << *(q) + 2 << endl;
    // cout << *(q + 4) << endl;

    // char ch[50] = "chetan";
    // char *cptr = ch; // or &ch nhi
    // cout << cptr << endl;

    // int arr[10] = {10, 20, 30};
    // int *p = arr;
    // cout << p << endl;

    // char che[50] = "yadav";
    // char *cpr = che;
    // cout << che << endl;    // yadav
    // cout << &che << endl;   // 104 ba
    // cout << che[0] << endl; // y
    // cout << &cpr << endl;   // 208
    // cout << *cpr << endl;   // y
    // cout << cpr << endl;    // yadav

    // char ch[30] = "Statement";
    // char *cptr = &ch[0];

    // cout << ch << endl;          // statement
    // cout << &ch << endl;         // 104 B.A.
    // cout << *(ch + 3) << endl;   // ch[3] --> t
    // cout << cptr << endl;        // statement
    // cout << &cptr << endl;       // 216
    // cout << *(cptr + 3) << endl; // cptr[3]
    // cout << cptr + 2 << endl;    // atement
    // cout << *cptr << endl;       // s cptr[0]
    // cout << cptr + 8 << endl;    // t

    // // char ch = 'a';
    // // char *cptr = &ch;
    // // cout << cptr << endl;

    // // char ch[10] = "a";
    // // // char *cptr = &ch[0];
    // // // char *cptr = ch;
    // // char *cptr = &ch;
    // // // cout << cptr << endl;

    // // char ch[10] = "chetan";
    // // char * c = ch;
    // char *cptr = "chetan"; // possible but bad practice bcoz temp storage
    return 0;
}