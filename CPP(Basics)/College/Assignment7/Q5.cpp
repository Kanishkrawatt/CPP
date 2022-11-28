#include <bits/stdc++.h>

using namespace std;
class Base{
    public: 
        int a = 10;
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