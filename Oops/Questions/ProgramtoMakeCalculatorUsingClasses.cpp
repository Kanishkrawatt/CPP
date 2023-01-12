#include <iostream>
using namespace std;
class Calculator{
    int num1;
    int num2;
    public:
    Calculator(int num1, int num2){
        this->num1 = num1;
        this->num2 = num2;
    }
    int add(){
        return num1 + num2;
    }
    int sub(){
        return num1 - num2;
    }
    int mul(){
        return num1 * num2;
    }
    int div(){
        return num1 / num2;
    }
};
int main(){
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    Calculator c(num1, num2);
    cout << "Addition: " << c.add() << endl;
    cout << "Subtraction: " << c.sub() << endl;
    cout << "Multiplication: " << c.mul() << endl;
    cout << "Division: " << c.div() << endl;
    return 0;
}