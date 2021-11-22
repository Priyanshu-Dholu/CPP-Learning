#include <iostream>
using namespace std;

class Base{
    public:
    void show(){
        cout<<"Hello From Base!\n";
    }
};

class Derived:public Base{
    public:
    void show(){
        cout<<"After this show() is called from Base\n";
        Base::show();
    }
};
int main(){
    Derived deri;
    deri.show();
    return 0;
}