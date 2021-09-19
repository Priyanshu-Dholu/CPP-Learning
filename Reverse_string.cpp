#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char word[50];
    cout << "Enter a word: ";
    cin >> word;
    cout << "The Reversed Word is " << strrev(word);
    return 0;
}