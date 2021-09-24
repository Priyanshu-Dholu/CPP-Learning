#include <iostream>
#include<string.h>
using namespace std;

int main (){
    char word[50],revw[50];
    cout<<"Enter A Word: ";
    cin>>word;
    strcpy(revw,word);
    strrev(revw);
    if (strcmp(revw,word) == 0)
    {
        cout<<"The Word Is Palindrome";
    }
    else{
        cout<<"Word is not Palindrome";
    }
    return 0;
}