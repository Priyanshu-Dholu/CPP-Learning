#include <iostream>
using namespace std;

/*
In Inline Function
The Compiler Places
A Copy Of Code Where
This Function Is Called
*/

inline int add(int a,int b){
    return a+b;
}

int main(){
    int n1,n2;
    cout<<"Enter 2 Numbers :- ";
    cin>>n1>>n2;
    cout<<"Addition :- "<<add(n1,n2); // Here Entire Function Will Be Copied
    return 0;
}