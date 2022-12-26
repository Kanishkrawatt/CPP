#include <iostream>
#include <string.h>
using namespace std;


class Person
{
public:
    string name;
    int age;
    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
    void display()
    {
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
    }
};

class Student : public Person
{
public:
    int id;
    Student(string name, int age, int id) : Person(name, age)
    {
        this->id = id;
    }

    void display()
    {
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
        cout << "Id : " << id << endl;
    }
};
class Exam : public  Student
{
public:
    int ExamId;
    Exam(string name, int age, int id, int ExamId) : Student(name, age, id)
    {
        this->ExamId = ExamId;
    }

    void display()
    {
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
        cout << "Id : " << id << endl;
        cout << "ExamId : " << ExamId << endl;
    }
};

class Sports : public Person
{
public:
    int SportsId;
    Sports(string name, int age, int SportsId) : Person(name, age)
    {
        this->SportsId = SportsId;
    }

    void display()
    {
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
        cout << "SportsId : " << SportsId << endl;
    }
};

class Result : public Exam,public Sports
{
public:
    int ResultId;
    Result(string name, int age, int id, int ExamId, int SportsId, int ResultId) : Exam(name, age, id, ExamId), Sports(name, age, SportsId)
    {
        this->ResultId = ResultId;
    }

    void display()
    {
        cout << "Name : " << Exam::name << endl;
        cout << "Age : " << Exam::age << endl;
        cout << "SportsId : " << SportsId << endl;
        cout << "Id : " << id << endl;
        cout << "ExamId : " << ExamId << endl;
        cout << "ResultId : " << ResultId << endl;
    }
};

int main()
{
    Result r1("Kanishk",18,1,10,2,11);
    r1.display();
}
