#include <iostream>
using namespace std;
class Student{
    public:
        int roll;
        string name;
        Student(){
            roll = 0;
            name = "No Name"; }};
class InternalExam : public virtual Student{
    public:
        int Internalmarks;
        InternalExam(){
            Internalmarks =0;}};
class ExternalExam : public virtual Student{
    public:
        int Externalmarks;
        ExternalExam(){
            Externalmarks = 0;}};
class Result : public InternalExam, public ExternalExam{
    public:
        int total;
        Result(){
            total = 0;}
        void display(){
            cout<<"Name : "<<name<<endl;
            cout<<"Roll : "<<roll<<endl;
            cout<<"Internal Marks : "<<Internalmarks<<endl;
            cout<<"External Marks : "<<Externalmarks<<endl;
            cout<<"Total Marks : "<<total<<endl;}};
int main(){
    Result r1;
    r1.name = "Kanishk";
    r1.roll = 1;
    r1.Internalmarks = 100;
    r1.Externalmarks = 100;
    r1.total = r1.Internalmarks + r1.Externalmarks;
    r1.display();
    return 0;}