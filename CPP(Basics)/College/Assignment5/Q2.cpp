//  write a program to calculate the sum of its digits if the number is 5 digit number;

#include <bits/stdc++.h>

using namespace std;
int main(){
    int num,mod,sum=0;
    cin>>num;
    // 1
    mod =num%10;
    num= num/10;
    sum += mod;
    // 2
    mod =num%10;
    num= num/10;
    sum += mod;
    // 3
    mod =num%10;
    num= num/10;
    sum += mod;
    // 4
    mod =num%10;
    num= num/10;
    sum += mod;
    // 5
    mod =num%10;
    num= num/10;
    sum += mod;
    cout<<sum;

}