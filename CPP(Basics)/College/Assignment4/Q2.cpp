// Wap to returning object from fucntion
// Write a program which reads two complex numbers and then calculate the 
// difference between the two by passing object as function arguments.

#include <bits/stdc++.h>
using namespace std;
class Complex{
    public:
        int real,img;
        Complex Difference(Complex C1,Complex C2){
            Complex temp;
            temp.real = C1.real-C2.real;
            temp.img = C1.img - C2.img;
            return temp;
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
    int r,i;
    c1.GetData(4,3);
    c2.GetData(5,8);
    c3 = c3.Difference(c2,c1);
    c3.Print();
}


