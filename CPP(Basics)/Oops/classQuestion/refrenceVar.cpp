// Wap to show the concept o Reference Variable

# include <bits/stdc++.h>

using namespace std;

int main(){
    cout<<"Kanishk"<<endl;
    cout<<"07129802021"<<endl;
    int num1,num2;
    cin>>num1>>num2;
    int &ref = num1;
    cout<<"Sum of "<<num1<<" and "<<num2 <<" is "<<ref+num2;
}