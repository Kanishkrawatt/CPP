# include <bits/stdc++.h>
using namespace std;
int CheckNum(int N){
    return (N && !((N)&(N-1)));
}

int main(){
    int N;
    cout<<"Enter Number :\t";
    cin>>N;
    cout<<(CheckNum(N)?"Yes":"No")<<endl;
}