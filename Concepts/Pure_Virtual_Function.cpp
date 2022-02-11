#include <iostream>
using namespace std;

/*
We have to initialize The Function with 0
to make it Pure Virtual Function.

Also If We Add Arguments in Functions 
in derived class then it will do function overriding.
*/

/*
Pure Virtual Functions & Abstract Class in C++ :-

Sometimes implementation of all function cannot be provided in a base class
because we don’t know the implementation. Such a class is called abstract class.

A pure virtual function (or abstract function) in C++ is a virtual function
for which we don’t have implementation, we only declare it.

A pure virtual function is declared by assigning 0 in declaration. 
Some important facts – 
1) A class is abstract if it has at least one pure virtual function.
2) We can have pointers and references of abstract class type.
3) If we do not override the pure virtual function in derived class, then derived class also becomes abstract class.
4) Abstract classes cannot be instantiated. 
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

class Rectangle:public Shape
{
    public:
    void getShape(){
        cout<<"\nEnter L & B : ";
        int l,b;
        cin>>l>>b;
        cout<<"Area :- "<<l*b;
    }
};

int main()
{
    Circle c;
    c.getShape();
    Rectangle r;
    r.getShape();
    return 0;
}