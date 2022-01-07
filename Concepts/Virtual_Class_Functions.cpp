#include <iostream>
using namespace std;

class Base
{
public:
    virtual void print()
    {
        cout << "Base Class Printed\n";
    }
};

class Derived : public Base
{
public:
    void print()
    {
        cout << "Derived Class Printed\n";
    }
};

int
main()
{
    Base *baseptr;
    Derived deri;

    baseptr = &deri;
    baseptr->print();
    return 0;
}