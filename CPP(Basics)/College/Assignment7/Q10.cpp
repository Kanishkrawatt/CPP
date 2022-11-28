#include <bits/stdc++.h>

using namespace std;
class Base1{
    public: 
        Base1(){
            cout<<"This is A Base 1 Class Constructor"<<endl;
        }
};  
class Base2{
    public:
        Base2(){
            cout<<"This is A Base 2 Class Constructor"<<endl;
        }
};
class Derived:public Base1,Base2{
    public:
        Derived(){
            cout<<"This is A Derived Class Constructor"<<endl;
        }
        
};
int main(){
    Derived D1;
}