#include <iostream>

using namespace std;
class Oops
{
private:
    int a,b;
public:
    int c,d;
    void showdata(){
        cout << c <<endl;
        cout << d <<endl;
        cout << a <<endl;
        cout << b <<endl;
    }
    void getData(int a1,int a2,int a3);
};
void Oops :: getData(int a1,int a2,int a3){
    a = a1;
    b = a2;
    c = a3;
}

int main(){
    Oops Data;
    Data.getData(1,2,3);
    Data.d = 5;
    Data.showdata();
}