#include <bits/stdc++.h>

using namespace std;
class Base{
    public: 
        Base(){
            cout<<"This is A Base Class Constructor"<<endl;
        }
};  
class Derived:public Base{
    public:
        Derived(){
            cout<<"This is A Derived Class Constructor"<<endl;
        }
        
};
int main(){
    Derived D1;
}