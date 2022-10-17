// Wap to show the concept o Reference Variable

# include <bits/stdc++.h>

using namespace std;

int main(){
    cout<<"Kanishk"<<endl;
    cout<<"07129802021"<<endl;
    int a=8;
	int &ref=a;
	cout<< "Now Both 'ref' and 'a' will refer to value of a\n";
	cout<<"The value of a is : "<<a<<endl;
	cout<<"The value of ref is also : "<<ref;
}