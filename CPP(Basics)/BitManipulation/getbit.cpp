#include <bits/stdc++.h>

using namespace std;
int getBit(int number,int pos){
    return ((number & (1<<pos))!=0);
}
int main(){
    cout<<getBit(5,2)<<endl;
}