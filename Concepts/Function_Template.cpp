#include <iostream>
using namespace std;

/*
So we can just specify datatype in
main() function so it saves us time 
by not writing same function again
& again like function Overloading.
*/

/*
Useful Video :- 
https://www.youtube.com/watch?v=bP1ceQFbohM
*/

template <typename T>
T add(T x,T y){
    return (x+y);
}

int main(){
    cout<<"Addition of 5 & 15 :- "<<add<int>(5,15);
    cout<<"\nAddition of 5.5 & 15.5 :- "<<add<float>(5.5,15.5);
    return 0;
}