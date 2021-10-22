#include <iostream>
using namespace std;

class Base{
    public:
    int base_num;
    void print(){
        cout<<"Base_num = "<<base_num;
    }
};

// Inheriting From Base
class Derived_1:public Base{
    public:
    int derived1_num;
};

// Inheriting From Derived_1
class Derived_2:public Derived_1{

};

int main(){
    Derived_2 d2;
    d2.base_num = 15;
    d2.derived1_num = 20;
    d2.print();
    return 0;
}