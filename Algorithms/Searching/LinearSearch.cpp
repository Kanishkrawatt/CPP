#include <bits/stdc++.h>

using namespace std;

//  Guess function will return 0 if the numbers is equal to guessed Number
//                      return -1 if the number is smaller than guessed Number
//                      return 1 if the number is greater than guessed Number


int guess(int num){
    int reqnum=4;
    if(num==reqnum){
        return 0;
    }
    else if(num>reqnum){
        return -1;
    }
    else{
        return 1;
    }
}
int LinearSearch(int n){
    for(int i=0;i<n;i++){
        if(guess(i)==0){
            return i;
        }
    }
    return -1;
}

int main(){
    int num =10;
    cout<<"The Number = "<<LinearSearch(num)<<endl<<"Complexity : O(n)";;
}