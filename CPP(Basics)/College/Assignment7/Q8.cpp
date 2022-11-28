#include <bits/stdc++.h>

using namespace std;
class Base{
    public: 
        int b = 20;
        void show(){
            cout<<b;
        }
};  
class Derived:public Base{
    public:
        int a =10;
        
};
int main(){
    Derived D1;
    D1.show();
}