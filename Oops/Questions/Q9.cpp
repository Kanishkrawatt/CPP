#include<iostream>
#include<conio.h>
using namespace std;
class counter
{
	static int count;
	public:
		counter()
		{
			count++;
			cout << "Object Number= " << count<< endl;
		}
};
int counter :: count;
int main()
{
	counter c1,c2,c3;
	
 
    return 0;
}
