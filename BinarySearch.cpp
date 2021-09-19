#include <iostream>
using namespace std;
int main()
{
    int ar[5] = {12, 15, 16, 18, 20};
    int beg = 0;
    int pos = -1;
    int end = 5;
    int mid;
    int n = 18;
    while (beg <= end)
    {
        mid = (beg + end) / 2;
        if (ar[mid] == n)
        {
            cout<<"Location :- "<<++mid<<endl;
            pos = mid;
            break;
        }
        else if (ar[mid] > n)
        {
            end = mid - 1;
        }
        else
        {
            beg = mid + 1;
        }
    }
    if (pos == -1)
    {
        cout << "Element Is Not There!" << endl;
    }
    return 0;
}