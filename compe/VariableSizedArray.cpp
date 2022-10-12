#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,q;
    vector<vector <int>> arr;
    cin>>n>>q;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        vector<int> innerarray;
        for(int j=0;j<k;j++){
            int temp;
            cin>>temp;
            innerarray.push_back(temp);
        }
        arr.push_back(innerarray);
    }
    for(int i=0;i<q;i++){
        int a,index;
        cin>>a>>index;
        cout<<arr[a][index]<<endl;
    }
    return 0;
}
