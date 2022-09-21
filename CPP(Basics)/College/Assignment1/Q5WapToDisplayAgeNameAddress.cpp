// Wap to display name, age and address

#include <bits/stdc++.h>
#include <string>
using namespace std;

int main(){
    cout<<"Kanishk"<<endl;
    cout<<"07129802021"<<endl;
    string name,address;
    int age;
    cout<<"Name : ";
    getline(cin,name);
    cout<<"Age : ";
    cin>>age;
    cout<<"Address : ";
    cin.ignore();
    getline(cin,address);
    cout <<"Output"<<endl;
    cout<<"Name : "<<name<<endl;
    cout<<"Age : "<<age<<endl;
    cout<<"Address : "<<address<<endl;
    return 1;
}