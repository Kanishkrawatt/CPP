#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cout<<"Binary Search"<<endl;
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
    cin>> key;
    int lb = 0;
    int ub = n;
    while(lb<=ub){
        int mid = (lb+ub)/2;
        if(arr[mid]==key){
            cout<<"Number Found at "<<mid<<" index"<<endl;
            break;
        }
        else if(arr[mid]>key){
            ub=mid-1;
        }
        else{
            lb = mid+1;
        }
    }
    if(lb>ub){
        cout<<"Number Not Found";
    }

}