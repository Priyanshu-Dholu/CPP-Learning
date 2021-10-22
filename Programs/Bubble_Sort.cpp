#include <iostream>
using namespace std;

int main()
{
    int as, i, j, swap;
    cout << "Enter Array Size: ";
    cin >> as;
    int ar[as];
    cout << "Enter Array Elements: ";
    for (i = 0; i < as; i++)
    {
        cin >> ar[i];
    }
    for (i = 0; i < as; i++)
    {
        for (j = 0; j < as - i - 1; j++)
        {
            if (ar[i] > ar[i + 1])
            {
                swap = ar[i];
                ar[i] = ar[i + 1];
                ar[i + 1] = swap;
            }
        }
    }
    cout << "Sorted Array is: ";
    for (i = 0; i < as; i++)
    {
        cout << ar[i] << endl;
    }

    return 0;
}