#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "Kanishk" << endl;
    cout << "07129802021" << endl;
    int n, fact = 1;
    cout << "Enter no to calculate for factorial : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
        fact *= i;
    cout << "The factorial of " << n << " is : " << fact;
}
