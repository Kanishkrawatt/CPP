// Two children , Lily and ron, want to share a chocolate bar. Each of the square has an integer on it.
// Lily decides to share a contiguous segment of the bar selected such that;
// The length of the segment matches Ron's Birth mounth , and
// The Sum of the itegers on the sqaures is equal to his birth day
#include <bits/stdc++.h>

using namespace std;

int birthday(vector<int> s, int d, int m) {
    int count = 0;
    for(int i=0;i<s.size();i++){
        int sum = 0;
        for(int j=i;j<i+m;j++){
            sum+=s[j];
        }
        if(sum==d){
            count++;
        }
        return count;
    }
}

int main(){
    int n,d,m;
    vector<int> s; 
    cin>>n;
    for(auto &i :s){
        cin>>i;
    }
    cin>>d>>m;
    int a =birthday(s,d,m);
    cout<<a;

}