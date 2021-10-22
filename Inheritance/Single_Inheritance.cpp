#include <iostream>
using namespace std;

class Base
{
public:
    int num_a;
    void print()
    {
        cout << num_a << endl;
    }
};

class Derived : public Base
{
    /*
    All Functions And Data Members 
    Will Be Inherited Through Class 'Base'.
    */
};

int main()
{
    Derived d;
    d.num_a = 15;
    d.print();
    return 0;
}