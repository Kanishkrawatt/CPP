#include <bits/stdc++.h>
using namespace std;

int OctalToDecimal(int Octal){
    int & n = Octal;
    int EightKiPower=1,OctalNumber,num,Decimal=0;
    while(n>0){
        num = n%10;
        Decimal += num*EightKiPower;
        EightKiPower *=8;
        n/=10;
    }
    return Decimal;
}
int main(){
    int Octal;
    cin >> Octal;
    int DecimalConvetion = OctalToDecimal(Octal);
    cout << DecimalConvetion;
}