#include <bits/stdc++.h>

using namespace std;

int main(){
    #ifndef Online 
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    #endif

    int N;
    cin>>N;

    switch(N){
        case 1:
            cout << "One";
            break;
        case 2:
            cout << "Two";
            break;
        case 3:
            cout<< "three";
            break;
        default:
            cout <<N<<endl;
            break;
    }
}