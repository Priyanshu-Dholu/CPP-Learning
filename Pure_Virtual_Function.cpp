#include <iostream>
using namespace std;

/*
We have to initialize The Function with 0
to make it Pure Virtual Function.

Also If We Add Arguments in Functions 
in derived classthen it will do function overriding.
*/

class Shape
{
public:
    virtual void getShape() = 0;
};

class Circle : public Shape
{
public:
    void getShape()
    {
        cout << "Enter Radius: ";
        int r;
        cin >> r;
        cout << "Area :- " << (3.14 * r * r);
    }
};

int main()
{
    Circle c;
    c.getShape();
    return 0;
}