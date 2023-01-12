#include <iostream>
using namespace std;
class Complex{
    private:
        int real;
        int img;
    public:
        Complex (int r = 0, int i = 0){
            real = r;
            img = i; }
        void Display (){
            cout << real << "+i" << img;}
        friend Complex operator - (Complex c1, Complex c2);};
Complex operator - (Complex c1, Complex c2){
    Complex temp;
    temp.real = c1.real - c2.real;
    temp.img = c1.img - c2.img;
    return temp;}
int main (){
    Complex C1(5, 3), C2(10, 5), C3;
    C1.Display();
    cout << " - ";
    C2.Display();
    cout << " = ";
    C3 = C1 - C2;
    C3.Display();}