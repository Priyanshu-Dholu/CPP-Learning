#include <iostream>
using namespace std;
int fact(int f);
int main (){
    int num,z;
    cout<<"Enter A Number: ";
    cin>>num;
    z = fact(num);
    cout<<"Factorial of "<<num<<" is "<<z;
    return 0;
}
int fact(int f){
    int factorial = 1;
    for (int i = f; i > 0 ; i--)
    {
        factorial = factorial * i;
    }
    return factorial;

}
