#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Student
{
private:
    string gf;

public:
    int id;
    int age;
    bool present;
    string name;
    int nos;

    // Default ctor --> Assigns Garbage Value

    Student()
    {
        cout << "Student ctor called" << endl;
    }

    // Parameterized ctor

    Student(int _id, int _age, bool _present, string _name, int _nos, string _gfname)
    {
        id = _id;
        // this->id = id;
        age = _age;
        // this->age = age;
        present = _present;
        name = _name;
        nos = _nos;
        gf = _gfname;
        cout << "Student parameterized ctor called" << endl;
    }

    // Parameterized ctor

    Student(int _id, int _age, bool _present, string _name, int _nos)
    {
        id = _id;
        age = _age;
        present = _present;
        name = _name;
        nos = _nos;
        cout << "Student parameterized ctor called w/o gf called" << endl;
    }

    void study()
    {
        cout << "studying" << endl;
    }
    void sleep()
    {
        cout << "sleeping" << endl;
    }
    void bunk()
    {
        cout << "bunking" << endl;
    }

private:
    void gfchatting()
    {
        cout << "Chatting" << endl;
    }
};

int main()
{
    Student s1;
    cout << s1.id << endl;

    Student s2(1, 12, 1, "Chota Bheem", 1, "Chutki");
    cout << s2.name << endl;
    cout << s2.id << endl;
    // cout << s2.gf << endl;

    Student s3(2, 15, 0, "Lokesh", 5);
    cout << s3.name << endl;

    int *a = new int(5);

    // Allocating on Heap
    Student *s4 = new Student(3, 34, 1, "chintu", 6);

    cout << s4->name << endl;
    cout << (*s4).name << endl;

    delete s4; // No Memory leak

    return 0;
}