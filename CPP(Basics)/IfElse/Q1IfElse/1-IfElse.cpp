#include <bits/stdc++.h>
    using namespace std;
    int main(){
        #ifndef ONLINE_JUDGE
            freopen("in.txt","r",stdin);
            freopen("out.txt","w",stdout);
        #endif
    
        std::ios::sync_with_stdio(false);
        
        int Num;
        cin>>Num;
        if(Num%2==0){
            cout<<Num<<" is Even Number";
        }
        else if (Num==0)
        {
            cout <<"Number is Zero";
        }
        
        else{
            cout<<Num<<" is Odd Number";
        }
    }