#include <iostream>
using namespace std;
class A{
    public:
        string name;
        A(){
            name = "";}
        A(string name){
            this->name = name;}
        A operator+(A a){
            A temp;
            temp.name = this->name + a.name;
            return temp;}
        void display(){
            cout<<name<<endl;}};
int main(){
    A a1("Kanishk");
    A a2("Rawat");
    A a3;
    a3 = a1 + a2;
    a3.display();
    return 0;}