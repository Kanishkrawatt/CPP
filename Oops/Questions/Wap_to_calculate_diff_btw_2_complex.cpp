#include <iostream>
using namespace std;
class Complex{
    int real, imag;
    public:
    Complex(int real, int imag){
        this->real = real;
        this->imag = imag;
    }
    void sub(Complex c){
        this->real -= c.real;
        this->imag -= c.imag;
    }
    void display(){
        cout << this->real << " + " << this->imag << "i" << endl;
    }
};
int main(){
    Complex c1(5, 6), c2(2, 3);
    c1.sub(c2);
    c1.display();
    return 0;
}