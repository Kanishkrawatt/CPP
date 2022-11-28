#include <bits/stdc++.h>

using namespace std;
class Base{
    public: 
        Base(int a ){
            cout<<"This is A Base Class Constructor and Parameter is "<<a<<endl;
        }
};  
class Derived:public Base{
    public:
        Derived(int a ):Base(a){
            cout<<"This is A Derived Class Constructor and Parameter is "<<a<<endl;
        }
        
};
int main(){
    Derived D1(10);
}