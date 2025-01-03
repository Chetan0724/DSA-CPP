// Operator Overloading

#include <iostream>
using namespace std;

class Vector
{
    int x;
    int y;

public:
    Vector(int x, int y)
    {
        this->x = x;
        this->y = y;
    }

    // Init List
    /*
    Vector(int x, int y) : x(x), y(y) {
    }
    */

    // op overloading
    void operator+(const Vector &src)
    {
        // this would point to v1
        // src would be ref to v2
        this->x = this->x + src.x;
        this->y = this->y + src.y;

        /*
            this->x += src.x;
            this->y += src.y;
        */
    }

    void operator-(const Vector &src)
    {
        // this would point to v1
        // src would be ref to v2
        // this->x = this->x - src.x;
        // this->y = this->y - src.y;

        this->x -= src.x;
        this->y -= src.y;
    }

    void operator++()
    {
        this->x++;
        this->y++;
    }

    void display()
    {
        cout << "x: " << x << " "
             << "y: " << y << endl;
    }
};

int main()
{
    Vector v1(2, 3);
    Vector v2(4, 5);

    // v1 + v2;

    // v1 - v2;

    ++v1;

    // addition answer shold be stored in v1;
    v1.display();
    // +, -, () (find all cpp op which can be overloaded)
    // + --> vectors
    return 0;
}