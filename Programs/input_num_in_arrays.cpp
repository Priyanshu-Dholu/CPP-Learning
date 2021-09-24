#include <iostream>
using namespace std;

int main()
{
    int ar[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter No " << i + 1 << " ";
        cin >> ar[i];
    }
    for (int i = 0; i < 5; i++)
    {
        cout << "You have Entered this No. ";
        cout << ar[i] << endl;
    }

    return 0;
}
