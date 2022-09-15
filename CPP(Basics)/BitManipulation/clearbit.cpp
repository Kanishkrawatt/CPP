#include <bits/stdc++.h>

using namespace std;
int clearBit(int number,int pos){
    return (number & (~(1<<pos)));
}
int main(){
    cout<<clearBit(5,2)<<endl;
}

