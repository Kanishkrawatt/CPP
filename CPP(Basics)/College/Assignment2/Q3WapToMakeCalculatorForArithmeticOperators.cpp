# include <bits/stdc++.h>

using namespace std;

int main(){
    int a,b;
    cout<<"Kanishk"<<endl;
    cout<<"07129802021"<<endl;
    char op;
    cout<<"Enter two numbers : ";
    cin>>a>>b;
    cout<<"Enter operator : ";
    cin>>op;
    switch(op){
        case '+':
            cout<<"Addition : "<<a+b<<endl;
            break;
        case '-':
            cout<<"Subtraction : "<<a-b<<endl;
            break;
        case '*':
            cout<<"Multiplication : "<<a*b<<endl;
            break;
        case '/':
            cout<<"Division : "<<a/b<<endl;
            break;
        case '%':
            cout<<"Modulus : "<<a%b<<endl;
            break;
        default:
            cout<<"Invalid operator"<<endl;
    }
    return 1;
}