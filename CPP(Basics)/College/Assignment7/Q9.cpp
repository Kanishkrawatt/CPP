#include <bits/stdc++.h>

using namespace std;
class Base
{
public:
    Base()
    {
        cout << "This is A Base Class Constructor" << endl;
    }
    Base(int a)
    {
        cout << "This is a Default Class Constructor" << endl;
    }
};
class Derived : public Base
{
public:
    Derived()
    {
        cout << "This is A Derived Class Constructor" << endl;
    }
    Derived(int a ){
        cout<<"This is A Derived Class Constructor with parameter = "<<a<<endl;
    }
};
int main()
{
    Derived D1;
}