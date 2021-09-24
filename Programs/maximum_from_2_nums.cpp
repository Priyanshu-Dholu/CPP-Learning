#include <iostream>
using namespace std;
int max(int a, int b);
int main()
{
    int n1, n2;
    cout << "Enter Two Numbers :";
    cin >> n1 >> n2;

    cout << "Maximum number is " << max(n1, n2);
    return 0;
}
int max(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}