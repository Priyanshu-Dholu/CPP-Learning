#include <iostream>
using namespace std;
void fibo(int n);
int main()
{
    int n;
    cout << "Enter A Number: ";
    cin >> n;
    fibo(n);

    return 0;
}
void fibo(int n)
{
    int n1 = 0;
    int n2 = 1;
    int newterm;
    for (int i = 0; i < n; i++)
    {
        cout << n1 << endl;
        newterm = n1 + n2;
        n1 = n2;
        n2 = newterm;
    }
}