// Write a program which reads two complex numbers and then calculate the 
// difference between the two by passing object as function arguments.
#include <bits/stdc++.h>
using namespace std;
class Complex{
    public:
        int real,img,result;
        void multiplication(Complex C1,Complex C2){
            real = C1.real*C2.real;
            img = (C1.img*C2.img);
            result = real-img;
        }
        void GetData(int r,int i){
            real = r;
            img = i;
        }
        void Print(){
            cout<<"Complex Number : "<<real<<" - "<<img<<" = "<< result<<endl;
        }   
};

int main(){
    cout<<"Kanishk"<<endl;
    cout<<"07129802021"<<endl;
    Complex c1,c2,c3;
}


