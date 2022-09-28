// There will be two array of integers Determine all integers that satisy the following two conditions:
//  The Elements of the first array are all factors of the ineger being considered
// The Intefer being considered is a factor of all elements of the second array

// These numbers are referred to as being between the two arrays . Determine how many such numbers exist

#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the getTotalX function below.
int getTotalX(vector<int> a, vector<int> b) {
    int count = 0;
    int max = *max_element(a.begin(), a.end());
    int min = *min_element(b.begin(), b.end());
    for (int i = max; i <= min; i++) { 
        bool isFactor = true;       
        for (int j = 0; j < a.size(); j++) {
            if (i % a[j] != 0) {    
                isFactor = false;  
                break;
            }
        }
        if (isFactor) {
            for (int k = 0; k < b.size(); k++) {
                if (b[k] % i != 0) {
                    isFactor = false;
                    break;
                }
            }
        }
        if (isFactor) {
            count++;
        }
    }
    return count;
}