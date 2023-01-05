// Define a class counter which contains an int variable count define as static , whenever an object of this object is created count is incremented by 1
// use this class in main to create multiple objects of this class in main to create multiple objects of this class and display value of count each time

#include <iostream>
using namespace std;
class Counter{
    public:
        static int count;
        Counter(){
            count++;
        }
        void Print(){
            cout<<"Count : "<<count<<endl;
        }
};
int Counter::count = 0;
int main(){
    cout<<"Kanishk"<<endl;
    cout<<"07129802021"<<endl;
    Counter c1;
    c1.Print();
    Counter c2;
    c2.Print();
}
