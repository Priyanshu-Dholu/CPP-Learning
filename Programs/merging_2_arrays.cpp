#include <iostream>
using namespace std;

int main()
{
    int as1, as2, i, j = 0,swap;
    cout << "Enter array Size for 1: ";
    cin >> as1;
    int ar1[as1];
    cout << "Enter array Size for 2: ";
    cin >> as2;
    int ar2[as2], merge[as1 + as2];
    cout << "Enter array Elements for 1: ";
    for (i = 0; i < as1; i++)
    {
        cin >> ar1[i];
        merge[i] = ar1[i];
    }
    j = i;
    cout << "Enter array Elements for 2: ";
    for (i = 0; i < as2; i++)
    {
        cin >> ar2[i];
        merge[j] = ar2[i];
        j++;
    }
    cout << "Merged Array is: ";
    for (i = 0; i < as1 + as2; i++)
    {
        cout << merge[i] << endl;
    }
    for (i = 0; i < as1+as2; i++)
    {
        for (j = 0; j < as1+as2-i-1; j++)
        {
            if (merge[j] > merge[j+1])
            {
                swap = merge[j];
                merge[j] = merge[j+1];
                merge[j+1] = swap;
            }

        }

    }

    cout<<"Merged Sorted array is :";
    for (i = 0; i < as1+as2; i++)
    {
        cout<<merge[i]<<endl;
    }

    return 0;
}