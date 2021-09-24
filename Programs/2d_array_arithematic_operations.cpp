#include <iostream>
using namespace std;

int main()
{
    int ar1[3][3], ar2[3][3];
    cout << "Enter Array 1 Elements: " << endl;
    // For array 1 input
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Loc " << i << " " << j << endl;
            cin >> ar1[i][j];
        }
    }
    cout << endl;
    cout << "Array 1 Elements Are: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Loc " << i << " " << j << endl;
            cout << ar1[i][j] << endl;
        }
    }
    cout << endl;
    // For Array 2 input
    cout << "Enter Array 2 Elements: " << endl;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Loc " << i << " " << j << endl;
            cin >> ar2[i][j];
        }
    }
    cout << endl;
    cout << "Array 1 Elements Are: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Loc " << i << " " << j << endl;
            cout << ar2[i][j] << endl;
        }
    }
    cout << endl;
    // For addition
    cout << "Addition is: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Loc " << i << " " << j << endl;
            cout << ar1[i][j] + ar2[i][j] << endl;
        }
    }
    // For substraction
    cout << "Substraction is: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Loc " << i << " " << j << endl;
            cout << ar1[i][j] - ar2[i][j] << endl;
        }
    }
    cout << endl;
    // For multiplication
    cout << "Multiplication is: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Loc " << i << " " << j << endl;
            cout << ar1[i][j] * ar2[i][j] << endl;
        }
    }
    // For Division
    cout << "Division is: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Loc " << i << " " << j << endl;
            cout << ar1[i][j] / ar2[i][j] << endl;
        }
    }

    return 0;
}