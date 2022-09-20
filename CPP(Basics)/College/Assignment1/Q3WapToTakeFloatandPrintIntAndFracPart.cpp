# include <bits/stdc++.h>
using namespace std;
// Wap to take float and Print the Int part and frac part
int main(){
    float num,b;
    int a;
    cin>>num;
    a = int(num);
    b = num -a;
    cout<<"Interger Part: "<<a<<endl;
    cout<<"Fraction Part: "<<b<<endl;
}