#include <bits/stdc++.h>

using namespace std;

class base {
    public:
        base(){
            cout<<"One argument in base class"<<endl;
        }
};
class base2:public base{
    public:
        base2(){
            cout<<"hi"<<endl;
        }
};
class child:public base2 {
    public:
        child(int a):base2(),base(){
            cout<<"One Argument in Child class"<<endl;
        }
};

int main(){
    child obj(3);
}