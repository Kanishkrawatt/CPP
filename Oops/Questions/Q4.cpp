#include<iostream>
using namespace std;
class B
{
	public:
		B()
		{
			cout << "\n No argument constructor of the base class B ." << endl;
		}
};
class D1 : public B
{
	public:
		D1()
		{
			cout << "\n No argument constructor of a base class D1 ." << endl;
		}
};
class D2 : public D1
{
	public:
		D2()
		{
			cout << "\n No argument constructor of the derived class D2 ." << endl;
		}
};

int main()
{
	D2 objd;
}
