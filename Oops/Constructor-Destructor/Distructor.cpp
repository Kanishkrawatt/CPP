#include <iostream>
using namespace std;
class Complex{
    public:
        int real;
        int img;
        Complex(int real, int img){
            this->real = real;
            this->img = img;
            cout<<"Parametric Constructor is called"<<endl;
        }
        ~Complex(){
            cout<<"Destructor is called"<<endl;
        }
};
int main(){
    Complex C1(10, 20);
    return 0;
}