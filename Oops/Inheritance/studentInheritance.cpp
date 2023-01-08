#include <iostream>
#include <string>
using namespace std;
class person {
    public:
        string name = "Kanishk";
        void display(){
            cout<<"Name : "<<name<<endl;
        }
};
class student : public person{
    public:
        int roll = 1;
        void display(){
            cout<<"Name : "<<name<<endl;
            cout<<"Roll : "<<roll<<endl;
        }
};
class exam : public student{
    public:
        int marks = 100;
        void display(){
            cout<<"Name : "<<name<<endl;
            cout<<"Roll : "<<roll<<endl;
            cout<<"Marks : "<<marks<<endl;
        }
};
int main(){
    cout<<"Kanishk"<<endl;
    cout<<"07129802021"<<endl;
    exam E1;
    E1.display();
    return 0;
}
