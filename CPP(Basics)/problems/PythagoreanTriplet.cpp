#include <bits/stdc++.h>

using namespace std;

bool pythagoreanTriplet(int x,int y,int z){
    int a,b,c;
    a = max(x,max(y,z));
    if(a==x){
        b = y;
        c = z;
    }
    else if(a==y){
        b = x;
        c = z;
    }
    else{
        b = x;
        c = y;
    }

    if(a*a == b*b + c*c ){
        return true;
    }
    else{
        return false;
    }
    


}
int main(){
    int a,b,c;
    cin >> a >> b >> c;
    bool ans = pythagoreanTriplet(a,b,c);
    if(ans == true){
        cout << "It is Pythagorean Triplet"<<endl;
    }
    else{
        cout << "It is not a Pythagorean Triplet"<<endl;
    }
}