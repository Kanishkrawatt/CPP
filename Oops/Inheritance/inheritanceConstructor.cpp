#include <bits/stdc++.h>

using namespace std;

class base {
    public:
        base(int a){
            cout<<"One argument in base class"<<endl;
        }
};
class child:public base {
    public:
        child(int a):base(a){
            cout<<"One Argument in Child class"<<endl;
        }
};
int main(){
    child obj(3);
}