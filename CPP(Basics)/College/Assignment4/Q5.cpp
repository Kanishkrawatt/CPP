#include <iostream>
using namespace std;
class FunctionOverloading{
	public:
		int a,b;
		void GetData(int x,int y){
			a = x;
			b = y;
		}
		void Print(){
			cout<<"a : "<<a<<endl;
			cout<<"b : "<<b<<endl;
		}
		void Print(int x){
			cout<<"a : "<<a<<endl;
			cout<<"b : "<<b<<endl;
			cout<<"x : "<<x<<endl;
		}
};
int main(){
	cout<<"Kanishk"<<endl;
	cout<<"07129802021"<<endl;
	FunctionOverloading f1;
	f1.GetData(4,5);
	f1.Print();
	f1.Print(6);
}


