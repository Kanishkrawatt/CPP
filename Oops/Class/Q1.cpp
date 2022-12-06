// wap a simple class student which take name ,age, roll no semester as input 

# include <bits/stdc++.h>
# include <string>
using namespace std;

class Student {
    public: 
    int age,rollno;
    string name,semester;
    void getData (){
        cout<<"Enter Name : ";
        cin>>name; 
        cout<<"Enter Semester : ";
        cin>>semester;
        cout<<"Enter Age : ";
        cin>>age;
        cout<<"Enter Roll Number : ";
        cin>>rollno;
    }
    void showData(){
        cout<<"Name :  "<<name<<endl<<"Age :  "<<age<<endl<<"Semester : "<<semester<<endl<<"Roll Number :  "<<rollno<<endl;
    }
};

int main(){
    Student std;
    std.getData();
    std.showData();
    }