#include <iostream>
using namespace std;

class Student
{
private:
    string gf;

public:
    int id;
    int num;
    int roll;
    string name;
    int num2;
    string friendName;
    int *v;

    Student(int id, int num, int roll, string name, int num2, string gf)
    {
        this->id = id;
        this->num = num;
        this->roll = roll;
        this->name = name;
        this->num2 = num2;
        this->gf = gf;
        this->v = new int(10);
    }

    // copy ctor
    Student(const Student &srcobj)
    {
        cout << "Student copy ctor called" << endl;
        this->id = srcobj.id;
        this->num = srcobj.num;
        this->roll = srcobj.roll;
        this->name = srcobj.name;
        this->num2 = srcobj.num2;
        this->gf = srcobj.gf;
    }

    // Getter / Setter method
    string getGfName()
    {
        return gf;
        // return this->gf;
    }

    void setGfName(string gf)
    {
        this->gf = gf;
    }

    ~Student()
    {
        cout << "Student dtor called" << endl;
        delete v;
    }
};

int main()
{
    // copy ctor
    Student s1(1, 12, 1, "Chota Bheem", 1, "Chutki");

    cout << s1.getGfName() << endl;

    s1.setGfName("Indumati");

    cout << s1.getGfName() << endl;

    // Good practice
    Student s2 = s1;
    // Student s2(s1);

    // Bad practice
    // Student s2;
    // s2 = s1;

    cout << s1.name << endl;
    cout << s2.name << endl;
    return 0;
}

//  life cycle of an object

// Variable life cylcle
// 1) init
// 2) copy
// 3) destroy

// main func mein return 0 ke baad s1 will be destroyed;

/*
    {
        Student s1(1, 12, 1, "Chota Bheem", 1, "Chutki");
        cout << s1.name << endl;
    }
    Student s2;
*/