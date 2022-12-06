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
    Array A[5];
    for(int i=0;i<5;i++){
        A[i].getdata();
    }
    for(int i=0;i<5;i++){
        A[i].display();
    }
}
