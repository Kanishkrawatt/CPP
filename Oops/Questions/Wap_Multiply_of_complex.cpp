#include <iostream>
using namespace std;
class Complex{
    public:
    int real,img;
    Complex(int real, int img){
        this->real = real;
        this->img = img;
    }
    void Multiply(Complex C1, Complex C2){
        real = C1.real*C2.real - C1.img*C2.img;
        img = C1.real*C2.img + C1.img*C2.real;
    }
    void Display(){
        cout<<real<<" + "<<img<<"i"<<endl;
    }
};
int main(){
    Complex C1(10, 20);
    Complex C2(30, 40);
    Complex C3(0, 0);
    C3.Multiply(C1, C2);
    C3.Display();
    return 0;
}