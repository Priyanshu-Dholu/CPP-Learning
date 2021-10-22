#include <iostream>
using namespace std;
class stack
{
private:
    int ar[5];
    int top;

public:
    // making a constructor to initialize each array element to 0
    stack()
    {
        top = -1;
        for (int i = 0; i < 5; i++)
        {
            ar[i] = 0;
        }
    }

    // This is to check to if array is empty or not
    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        else
            return false;
    }
    // This is to check if array if full or not
    bool isFull()
    {
        if (top == 4)
        {
            return true;
        }
        else
            return false;
    }

    // function to push element in array
    void push(int var)
    {
        if (isFull())
        {
            cout << "-----------------------------------------------" << endl;
            cout << "Stack Overflow" << endl;
            cout << "-----------------------------------------------" << endl;
        }
        else
        {
            top++;
            ar[top] == var;
        }
    }
    // function to pop element in array 
    int pop()
    {
        if (isEmpty())
        {
            cout << "-----------------------------------------------" << endl;
            cout << "There is No Element / Stack underflow" << endl;
            cout << "-----------------------------------------------" << endl;
            return 0;
        }
        else
        {
            top--;
            ar[top] = 0;
        }
        return 0;
    }

    // Function to see TOP pointer in array
    void peek()
    {
        cout << "-----------------------------------------------" << endl;
        cout << "Top :- " << top << endl;
        cout << "-----------------------------------------------" << endl;
    }
};
int main()
{
    stack s;
    int option;
    do
    {
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Peek" << endl;
        cout << "4. Exit" << endl;

        cin >> option;
        switch (option)
        {
        case 1:
            cout << "Enter Element To Push: " << endl;
            int p;
            cin >> p;
            s.push(p);
            break;
        case 2:
            cout << "Popping Element" << endl;
            s.pop();
            break;
        case 3:
            s.peek();
            break;
        default:
            break;
        }
    } while (option != 4);

    return 0;
}