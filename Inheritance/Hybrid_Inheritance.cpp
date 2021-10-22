#include <iostream>
using namespace std;

class Base{
    public:
    int base;
};

class Derived_1:public Base{};

class Derived_2:public Derived_1{};

class Derived_3:public Base{};

int main(){
    Base b;
    Derived_1 d1;
    Derived_2 d2;
    Derived_3 d3;
    b.base = 5;
    d1.base = 5;
    d2.base = 5;
    d3.base = 5;
    int a = b.base+d1.base+d2.base+d3.base;
    cout<<"Addition :- "<<a<<endl;
    return 0;
}