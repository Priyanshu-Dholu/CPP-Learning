// Operation on Queues :-

/*
Insert(Value) / Enqueue
Remove() / Dequeue

isFull() :- To Check If Queue Is Full or not
isEmpty() :- To Check If Queue Is Empty Or Not

count() :- To Count Total no of elements in Queue
*/

#include <iostream>
using namespace std;

class que
{
    int ar[6];
    int front;
    int rear;

public:

    que(){
        front = -1;
        rear = -1;
    }

    // To Check If Queue is full
    bool isFull()
    {
        if (rear == 5 - 1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    // To Check If Queue is Empty
    bool isEmpty()
    {
        if (front == -1 && rear == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    // To insert element in queus
    int insert(int val){
        if (isFull())
        {
            cout<<"Queue Is Full!"<<endl;
            return 0;
        }
        else if (isEmpty())
        {
            rear = front = 0;
        }
        else{
            rear++;
        }
        ar[rear] = val;
        return 0;
    }

    // To Remove an element from Queue
    int removed(){
        if (isEmpty())
        {
            cout<<"Queue Is Empty"<<endl;
            return 0;
        }
        else if (front == rear)
        {
            front = rear = -1;
        }
        else{
            front++;
        }
        return 0;
    }

    // To Show Element ar rear
    void showRear(){
        cout<<"Rear :- "<<ar[rear]<<endl;
    }
};

int main()
{
    int option;
    que q;
    do
    {
        cout<<"-----------------------------------"<<endl;
        cout<<"1. Insert"<<endl;
        cout<<"2. Remove"<<endl;
        cout<<"3. Check Rear"<<endl;
        cout<<"4. Exit!"<<endl;
        cout<<"-----------------------------------"<<endl;
        cin>>option;
        switch (option)
        {
        case 1:
            cout<<"Enter Element To Insert: ";
            int in;
            cin>>in;
            q.insert(in);
            break;
        case 2:
            q.removed();
            break;
        case 3:
            q.showRear();
            break;
        case 4:
            exit(1);
        }
    } while (option != 4);
    
    return 0;
}