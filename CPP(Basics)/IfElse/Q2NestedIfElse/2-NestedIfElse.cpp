#include <bits/stdc++.h>
    using namespace std;
    #define ll long long int
    #define vi vector<int>
    #define vll vector<long long int>
    int main(){
        #ifndef ONLINE_JUDGE
            freopen("in.txt","r",stdin);
            freopen("out.txt","w",stdout);
        #endif
    
        std::ios::sync_with_stdio(false);
        
        int Num;
        cin>>Num;
        if(Num%2==0){
            if(Num==2){
                cout << "Number is "<<Num;
            }
            else{
                cout << "Number is Not 2 It is "<<Num;
            }
        }
        else{
            if(Num==0){
                cout << "Number is zero";
            }
            else{
                cout << "Number is not zero it is "<<Num;
            }
        }
    }