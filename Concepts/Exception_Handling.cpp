/*

In C++ There Are 3 Keyword For Exception Handling :-

    1. Try
    2. Catch
    3. Throw

After using Throw in Try the Error will be transferred to
the catch as argument of the given variable ex 'throw denominator'

*/

#include <iostream>
using namespace std;

int main()
{
    int numerator, denominator, result;

    cout << "Enter Numerator :- ";
    cin >> numerator;

    cout << "Enter Denominator :- ";
    cin >> denominator;

    try
    {
        if (denominator == 0)
        {
            // If deno is 0 then it will throw an error
            throw denominator;
        }
        result = numerator / denominator;
        cout << result;
    }
    catch (int deno)
    {
        cout << "\nException: Divide By Zero Cannot Happen!!" << endl;
    }

    return 0;
}