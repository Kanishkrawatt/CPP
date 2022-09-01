#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cout<<"Linear Search"<<endl;
    cout<< "Enter The Size of array  : ";
    cin>>n;
    int arr[n];
    int i;
    for(i =0;i<n;i++){
        cout<<"Arr["<<i<<"]  : ";
        cin>>arr[i];
    }
    int key;
    cout<< "Enter The Number to check if it is in Array  : ";
    cin>>key;
    for(i=0;i<n;i++){
        if(arr[i]==key){
            cout<<"Number Found at "<<i<<" Index"<<endl;
            break;
        }
    }
    if(i==n){
        cout<<"Number Not Found"<<endl;
    }



}