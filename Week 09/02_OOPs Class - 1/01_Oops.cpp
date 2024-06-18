#include <iostream>
using namespace std;

class Student
{
public:
    int id;
    string name;
    int age;
    int nos;
    int marks;
    bool present;
};

int main()
{
    // Kab Tak variables declare karoge?

    int id1, id2;
    string name1, name2;
    int age1, age2;
    int nos1, nos2;
    int marks1[5], marks2[5];

    cout << sizeof(Student) << endl;

    // Ye bhi thoda ajib lag raha h, constructor ko layenge

    Student s1;
    s1.name = "Goli";
    s1.age = 12;
    s1.id = 1;
    s1.nos = 5;
    s1.present = 1;

    Student s2;
    s2.name = "Chota Bheem";
    s2.age = 11;
    s2.id = 2;
    s2.nos = 1;
    s2.present = 0;

    return 0;
}