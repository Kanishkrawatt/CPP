#include<iostream>
using namespace std;
class Counter
{
    private:
    static int count;
    public:
        Counter()
        {
            count++;
        }
        void printcount()
        {
            cout<<"The no of objects created are : "<<count<<endl;
        }
};
int Counter::count=0;
int main()
{

    Counter c1,c2,c3;
    c1.printcount();
}
