#include <iostream>
using namespace std;
int sort(int ar[], int ars);
int main()
{
    int as, i;
    cout << "Enter Array Size: ";
    cin >> as;
    int ar[as];
    cout << "Enter array elements: ";
    for (i = 0; i < as; i++)
    {
        cin >> ar[i];
    }
    sort(ar, as);
    cout << "Sorted array is: ";
    for (i = 0; i < as; i++)
    {
        cout << ar[i] << endl;
    }

    return 0;
}
int sort(int ar[], int ars)
{
    int swap, i, j;
    for (i = 0; i < ars; i++)
    {
        for (j = 0; j < ars - i - 1; j++)
        {
            if (ar[j] > ar[j + 1])
            {
                swap = ar[j];
                ar[j] = ar[j + 1];
                ar[j + 1] = swap;
            }
        }
    }
    return 0;
}