#include <iostream>
using namespace std;
int reverseNum(int num);
int main()
{
    int n;
    cout << "Enter A Number: " << endl;
    cin >> n;
    reverseNum(n);
    return 0;
}
int reverseNum(int num)
{
    int rev = 0;
    while (num > 0)
    {
        rev = (rev * 10) + (num % 10);
        num = num / 10;
    }
    cout << "Reversed Number: " << rev << endl;
    return 0;
}