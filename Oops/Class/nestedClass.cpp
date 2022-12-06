#include <iostream>
using namespace std;

class Employee{
    private:
        int salary;
        string address;
    public:
        string name;
        int age,experience;
        void setSalary(void );
        void addEmployee(){
            cout << "Enter Your Name : ";
            cin >> name;
            cout << "Enter Your Age : ";
            cin >> age;
            cout << "Enter Your Address : ";
            cin >>address;
            cout << "Enter Your Experience : ";
            cin >> experience;
            
        }
        void showData(){
            cout <<"Employee Name :"<<name<<endl;
            cout <<"Employee Age :"<<age<<endl;
            cout <<"Employee salary :"<<salary<<endl;
            cout <<"Employee Experience :"<<experience<<endl;


        }

};
void Employee :: setSalary(void ){
    if(age>30 && experience>5){
        salary = 40000;
    }
    else if(age<30 && experience>5){
        salary = 100000;
    }
    else{
        salary = 20000;
    }
    showData();
}

int main(){
    Employee E1;
    E1.addEmployee();
    E1.setSalary();
}