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
        int a = 10;
        
};
int main(){
    Derived D1;
}