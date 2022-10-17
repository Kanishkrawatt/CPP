// 	4. Create a class employee which have name, age, address of employee  include function get data show data
// 	Getdata function takes input from user and showdata displays data in the following format
// 	Name:
// 	Age:
//  Address:

// wap a simple class student which take name ,age, roll no semester as input 

# include <bits/stdc++.h>
# include <string>
using namespace std;
class Employee{
    public: 
    int age,id;
    string name,address;
    void getData (){
        cout<<"Enter Name : ";
        getline(cin,name);
        cout<<"Enter Age : ";
        cin>>age;
        cout<<"Enter Address : ";
        cin>>address;
        cout<<"Enter Id : ";
        cin>>id;
    }
    void showData(){
        cout<<"Name :  "<<name<<endl<<"Age :  "<<age<<"Address :  "<<address<<endl<<"Id :  "<<id<<endl;
    }
};
int main(){
    cout<<"Kanishk"<<endl;
    cout<<"07129802021"<<endl;
    Employee emp;
    emp.getData();
    emp.showData();
    }