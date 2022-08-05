#include <bits/stdc++.h>
using namespace std;

int BinaryToDecimal(int Binary){
    int & n = Binary;
    int num,Decimal=0;
    int twoKiPower=1;
    while(n>0){
        num = n%10;
        Decimal += num * twoKiPower;
        twoKiPower *=2;
        n /= 10;
    }
    return Decimal;

}
int main(){
    int BinaryNumber;
    cin >> BinaryNumber;
    int DecimalConvertion = BinaryToDecimal(BinaryNumber);
    cout << DecimalConvertion;

}