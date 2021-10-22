#include <iostream>
using namespace std;

class Base1{
    public:
        void hello(){
            cout<<"Hello From Base1"<<endl;
        }
};
class Base2{
    public:
        void hello(){
            cout<<"Hello From Base2"<<endl;
        }
};

class Derived:public Base1,public Base2{
    public:
        void hello(){
            Base2::hello();
        }
};

int main(){
    Derived d;
    d.hello();
    return 0;
}