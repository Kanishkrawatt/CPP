#include <bits/stdc++.h>
using namespace std;
class Complex {
    public:    
    int real,img;
    Complex(int r,int i){
        real = r;
        img = i;
    }
    Complex(Complex &c1){
        real = c1.real;
        img = c1.img;
    }
    void show(){
        cout<<real<<"+"<<img<<"i"<<endl;
    }
};

int main(){
    Complex c1(2,4);
    Complex c2(c1);
    c2.show();
}