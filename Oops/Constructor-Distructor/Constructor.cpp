#include <bits/stdc++.h>

using namespace std;

class Constructor{
    public:
        int num;
        Constructor(){
            num = 10;
        }
        Constructor(int num){
            this->num = num;
        }
        Constructor(Constructor & C){
            num = C.num;
        }
};
int main(){
    Constructor C1;
    cout<<"This iS Default Constructor "<<C1.num<<endl; //Default Constructor
    Constructor C2(20);
    cout <<"This is Parametric Constructor"<<C2.num<<endl; // Parameteric Constructor
    Constructor C3(C2);
    cout<<C3.num;   // Copy Constructor
 }