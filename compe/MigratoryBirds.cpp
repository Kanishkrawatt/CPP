#include <bits/stdc++.h>
using namespace std;
int migratoryBirds(vector<int> arr) {
    int count=0;
    map<int,int> data = {};
    for(int i=0;i<arr.size();i++){
       if (data[arr[i]]>0) {
        data[arr[i]]=data[arr[i]]+1;
    }
    else{
        data[arr[i]]=1;
    }    
    }
    int value;
    for(auto a:data){
        if(a.second>count){
            count=a.second;
            value = a.first;
        }
        else if (a.second==count) {
            if(a.first<value){
                value=a.first;
            }
        }
    }
    return value;
}
