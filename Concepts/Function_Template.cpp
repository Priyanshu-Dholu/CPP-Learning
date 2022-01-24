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
T add(T x, T y)
{
    return x + y;
}

int main()
{
    // Same Function With INT
    int a = add<int>(5, 5);
    cout << a << endl;

    // Same Function With FLOAT
    float b = add<float>(5, 5.5);
    cout << b << endl;

    // Same Function With STRING
    string c = add<string>("Priyanshu ", "Patel");
    cout << c;
    return 0;
}