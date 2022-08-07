#include <iostream>

using namespace std;

int main(){
    int n,power = 1,check=0;
    cin >> n;
    while(n>=power){
        if(n == power){
            check = 1;
            cout << "YES";
            break;
        }
        n *=2;
    }
    if(check ==0){
        cout << "NO";
    }
}