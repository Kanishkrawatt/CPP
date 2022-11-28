#include <bits/stdc++.h>

using namespace std;
class Base1
{
public:
    Base1(int a)
    {
        cout << "This is A Base 1 Class Constructor with parameter = " << a << endl;
    }
};
class Base2:public Base1
{
public:
    Base2(int a):Base1(3)
    {
        cout << "This is A Base 2 Class Constructor with parameter = " << a << endl;
    }
};
class Derived : public Base2
{
public:
    Derived(int a) : Base2(2)
    {
        cout << "This is A Derived Class Constructor With Parameter = " << a << endl;
    }
};
int main()
{
    Derived D1(10);
}