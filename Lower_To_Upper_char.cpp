#include <iostream>
#include <string>
using namespace std;

int main()
{
    char name[10];
    char upperstr[10];
    cout << "Enter Name: " << endl;
    cin >> name;
    int i = 0;
    while (name[i] != NULL)
    {
        if (name[i] >= 'a' && name[i] <= '2')
        {
            upperstr[i] = name[i] - 32;
        }
        else
        {
            upperstr[i] = name[i];
        }
        i = i + 1;
    }
    upperstr[i] = NULL;
    cout << upperstr;
    return 0;
}