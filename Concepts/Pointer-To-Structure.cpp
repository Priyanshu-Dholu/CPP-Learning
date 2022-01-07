#include<iostream>
using namespace std;
struct struc{
    int num;
};

int main(){

    struct struc var = {55};

    struct struc* pointer = &var;
    
    cout<<pointer->num;

    return 0;
}