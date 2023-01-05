#include <bits/stdc++.h>
using namespace std;
class Base{
    public: 
        Base(){
            cout<<"This is A Base Class Constructor"<<endl;}};  
class Derived:public Base{
    public:
        Derived(int a){
            cout<<"This is A Derived Class Constructor and parameter is "<<a<<endl;
}};
int main(){
    Derived D1(4);
}