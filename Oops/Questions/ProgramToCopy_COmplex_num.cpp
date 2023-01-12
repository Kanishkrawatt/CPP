#include <iostream>
using namespace std;
class Complex{
    public:
        int real;
        int img;
        Complex(int real, int img){
            this->real = real;
            this->img = img;
        }
        Complex(Complex & C){
            real = C.real;
            img = C.img;
        }
};
int main(){
    cout<<"Kanishk"<<endl;
    cout<<"07129802021"<<endl;
    Complex C1(10, 20);
    cout<<"This is Parametric Constructor : "<<C1.real<<" + "<<C1.img<<"i"<<endl;
    Complex C2(C1);
    cout<<"This is Copy Constructor : "<<C2.real<<" + "<<C2.img<<"i"<<endl;
    return 0;
}