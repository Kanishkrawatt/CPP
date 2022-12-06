#include <bits/stdc++.h>
using namespace std;

class Array{
    private:
        int data;
    public:
        void getdata(){
            cout<<"Enter data: ";
            cin>>data;
        }
        void display(){
            cout<<data<<endl;
        }
};

int main(){
    Array *A = new Array;
    A->getdata();
    A->display();
}