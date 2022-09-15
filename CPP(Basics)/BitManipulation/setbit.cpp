#include <bits/stdc++.h>

using namespace std;
int setBit(int number,int pos){
    return (number | (1<<pos));
}
int main(){
    cout<<setBit(5,1)<<endl;
}

