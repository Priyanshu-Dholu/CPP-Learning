#include <iostream>
using namespace std;
int fibo(int len);
int main (){
    int l,i;
    cout<<"Enter The Number: ";
    cin>>l;
    i = fibo(l);
    cout<<"Fibonassi Number is: "<<i<<endl;
    return 0;
}
int fibo(int len){
    if (len <= 1)
    {
        return len;
    }
    else{
        return fibo(len-1) + fibo(len-2);
    }

}