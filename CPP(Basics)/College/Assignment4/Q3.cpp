// Define a class counter which contains an int variable count define as static , whenever an object of this object is created count is incremented by 1
// use this class in main to create multiple objects of this class in main to create multiple objects of this class and display value of count each time.
#include <bits/stdc++.h>
using namespace std;

class Counter{
    static count=0;
    public:
        Counter(){
            count++;
        }
        void printCount(){
            cout<<count<<endl;
        }
};

int main(){
    Counter c1,c2;
    c1.printCount();

}