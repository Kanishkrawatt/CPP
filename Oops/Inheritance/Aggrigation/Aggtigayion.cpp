#include <iostream>
#include <string>

using namespace std;

class employee{
    private:
        int id;
        string name;
    public:
        void setdata(int i, string n){
            id = i;
            name = n;
        }
        void getdata(){
            cout<<"The id of this employee is "<<id<<endl;
            cout<<"The name of this employee is "<<name<<endl;
        }
};
class Company {
    private:
        employee *e1;
        string postion;
    public:
        Company(employee *e,string p="Programmer"){
            e1 = e;
            postion = p;
        }
        void display(){
            cout<<"The postion of this employee is "<<postion<<endl;
            e1->getdata();
        }
};

int main(){
    employee e1;
    e1.setdata(1, "Rahul");
    Company c1(&e1,"Manager");
    c1.display();


}
