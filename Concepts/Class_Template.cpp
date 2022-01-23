#include <iostream>
using namespace std;

template <typename T>
class Weight
{
    T kg;

public:
    void setWeight(T val)
    {
        kg = val;
    }
    void printData()
    {
        cout << "Weight Is " << kg << " KG" << endl;
    }
};

int main()
{
    // Class With Int Datatype
    cout<<"\nClass With Int Datatype\n";
    Weight<int> obj1;
    obj1.setWeight(55);
    obj1.printData();

    // Class With Float Datatype
    cout<<"\nClass With Float Datatype\n";
    Weight<float> obj2;
    obj2.setWeight(55.15);
    obj2.printData();

    // Class With String Datatype
    cout<<"\nClass With String Datatype\n";
    Weight<string> obj3;
    obj3.setWeight("55 - String");
    obj3.printData();
    return 0;
}