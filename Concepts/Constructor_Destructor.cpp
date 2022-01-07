// Destructor Will Be Invoked at end of program and it will be equal to no of 
// objects that you create in main function

#include <iostream>
using namespace std;

class person
{
    int person_id;
    string person_name;

public:
    // Function To Set Data
    void setData(int id, string name)
    {
        person_id = id;
        person_name = name;
    }

    // Function To Print Data
    void showData()
    {
        cout << "Person ID = " << person_id << endl;
        cout << "Person Name = " << person_name << endl;
    }

    // Default Constructor
    person()
    {
        cout << "This Is Default Constructor" << endl;
    }
    // Paremetrized Constructor
    person(int i, string n)
    {
        cout << "Paremetrized Constructor" << endl;
        person_id = i;
        person_name = n;
        cout << "I = " << i << " N = " << n << endl;
    }
    // Copy Constructor
    person(person &obj)
    {
        cout << "Copy Constructor" << endl;
        // We are saying that
        // Copy The Private Data member
        // To this constructors &obj
        person_id = obj.person_id;
        person_name = obj.person_name;
    }
    // Destructor
    ~person()
    {
        cout << "This Is Destructor" << endl;
    }
};

int main()
{
    person p1, p2(26, "Priyanshu");

    cout << "---------------------------------" << endl;
    person p3 = p2;
    p3.showData();
    cout << "---------------------------------" << endl;

    return 0;
}
