#include <bits/stdc++.h>

using namespace std;

//  Guess function will return 0 if the numbers is equal to guessed Number
//                      return -1 if the number is smaller than guessed Number
//                      return 1 if the number is greater than guessed Number

int guess(int num)
{
    int reqnum = 4;
    if (num == reqnum)
    {
        return 0;
    }
    else if (num > reqnum)
    {
        return -1;
    }
    else
    {
        return 1;
    }
}
int TernarySearch(int n)
{
    int low = 1;
    int high = n;
    while (low <= high)
    {
        int mid1 = low + (high - low) / 3;
        int mid2 = high - (high - low) / 3;
        int res1 = guess(mid1);
        int res2 = guess(mid2);
        if (res1 == 0)
            return mid1;
        if (res2 == 0)
            return mid2;
        else if (res1 < 0)
            high = mid1 - 1;
        else if (res2 > 0)
            low = mid2 + 1;
        else
        {
            low = mid1 + 1;
            high = mid2 - 1;
        }
    }
    return -1;
}

int main()
{
    int num = 10;
    
    cout << "The Number = " << TernarySearch(num)<<endl<<"Complexity : O(log3n)";
}