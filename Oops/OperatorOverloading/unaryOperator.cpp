#include <iostream>

using namespace std;

class Complex{
    public:
    int real;
    int imag;
    Complex(int r,int i){
        real =r;
        imag = i;
    }
    void getData(){
        cout<<"Enter The Real Part : ";
        cin>>real;
        cout<<"Enter the Imagenary Part";
    }
    void showData(){
        cout<<real<<"+"<<imag<<"i";
    }
    void operator++(int){ 
        real++;
        imag++;
    }

};

int main(){
    Complex c1(2,4);
    c1++;
    c1.showData();

}
