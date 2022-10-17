#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "Kanishk" << endl;
    cout << "07129802021" << endl;
	int n,n1=0,n2=1,next;
	cout<<"Enter the no of terms upto which you want to display the fibonacci series : ";
	cin>>n;
	cout<<n1<<" "<<n2<<" ";
	for(int i=3;i<=n;i++)
	{
		next=n1+n2;
		cout<<next<<" ";
		n1=n2;
		n2=next;	
	} 
}
