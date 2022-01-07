#include <iostream>
using namespace std;
class B;
class A
{
    int num1;

public:
    void getdata(int a)
    {
        num1 = a;
    }
    friend void test(A, B);
};
class B
{
    int num2;

public:
    void getdata(int b)
    {
        num2 = b;
    }
    friend void test(A, B);
};

void test(A o1, B o2)
{
    cout << o1.num1 + o2.num2;
}
int main()
{
    A an;
    an.getdata(5);
    B ans;
    ans.getdata(6);

    test(an, ans);
    return 0;
}