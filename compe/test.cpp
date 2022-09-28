#include <bits/stdc++.h>

using namespace std;

int main(){
    int a=1,b=2,c=3;
    int &x = a;
    cout<<a<<b<<c<<x<<endl;
    x =b;
    cout<<a<<b<<c<<x<<endl;
    x=c;
    cout<<a<<b<<c<<x<<endl;

}