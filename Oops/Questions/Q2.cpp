#include<iostream>
using namespace std;
class B1
{
    public:
    B1()
   {
         cout << "No-argument constructor of the base class B1 ."<< endl;
    }
};
class B2
{
   public:
   B2()
   {
      cout << "No-argument constructor of the base class B2 ."<< endl;
    }
};
class D : public B2, public B1
{
   public:
   D()
   {
     cout << "\nNo-argument constructor of the derived class D ."<< endl;
    }
};

int main()
{
   D objd;
}
