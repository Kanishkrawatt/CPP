// Write a function that takes an unsigned integer and returns the number of '1' bits it has (also known as the Hamming weight).

#include<iostream>
using namespace std;

class Solution {
public:
    int hammingWeight(uint32_t n) {
        int digit;
        int count = 0;
        while(n!=0){
            if(n&1){
                count++;
            }
            n = n>>1;
        }
        return count;
    }
};

int main(){
    Solution o1;
    cout<<o1.hammingWeight(00000000000000000000000000001011)<<endl;
    cout<<o1.hammingWeight(00000000000000000000000010000000)<<endl;
    // cout<<o1.hammingWeight(11111111111111111111111111111101)<<endl;
    
}