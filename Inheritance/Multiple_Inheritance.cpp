#include <iostream>
using namespace std;

/*
So Here We Derive 2 or More Classes
From A Single Base Class
*/

// This is Base Class
class Base{
    public:
    int base;
};

// This Is Derived From Base
class Derived_1:public Base{
    public:
    int derived_1;
};

// This Is Also Derived From Base
class Derived_2:public Base{
    public:
    int derived_2;
};

int main(){
    Base b;
    Derived_1 d1;
    Derived_2 d2;
    b.base = 5;
    d1.base = 5;
    d2.base = 5;
    int a = b.base+d1.base+d2.base;
    cout<<"Addition :- "<<a<<endl;
    return 0;
}