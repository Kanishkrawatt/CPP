// Write a program which reads two complex numbers and then calculate the 
// difference between the two by passing object as function arguments.

#include <bits/stdc++.h>
using namespace std;
class Complex{
    public:
        int real,img;
        void Difference(Complex C1,Complex C2){
            real = C1.real-C2.real;
            img = C1.img - C2.img;
        }
        void GetData(int r,int i){
            real = r;
            img = i;
        }
        void Print(){
            cout<<"Complex Number : "<<real<<" + i"<<img<<endl;
        }   
};

int main(){
    cout<<"Kanishk"<<endl;
    cout<<"07129802021"<<endl;
    Complex c1,c2,c3;
    c1.GetData(4,3);
    c2.GetData(5,8);
    c3.Difference(c2,c1);
    c3.Print();
}


