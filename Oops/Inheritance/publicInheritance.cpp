#include <bits/stdc++.h>

using namespace std;

class parentClass{
    public:
        int x= 10;
    private:
        int y=20;
    protected:
        int z = 30;
};

class ChildClass:public parentClass{
    public:
        void show(){
            cout<<"Private from Parent Class : (x) :  "<<this->x<<endl;
            cout<<"Protected from Parent Class : (z) : "<<this->z<<endl;
            cout<<"We can't access the Private Variable"<<endl;
        }

};

int main(){
    ChildClass c1;
    c1.show();
}