#include<iostream>
using namespace std;
class B1
{
	public:
		B1()
		{
			cout << "\n No argument constructor in base class B1 ." << endl;
		}
};
class B2
{
	public:
		B2()
		{
			cout << "\n No argument constructor in base class B2 ." << endl;
		}
};
class D : public B1, public B2
{
	public:
		D() : B2(),B1()
		{
			cout << "\n No argument constructor in derived class D ." << endl;
		}
};

int main()
{
	D objd;
}
