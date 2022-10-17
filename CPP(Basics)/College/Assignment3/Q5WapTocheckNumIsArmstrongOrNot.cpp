#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "Kanishk" << endl;
    cout << "07129802021" << endl;
    int n, r, d = 0, t;
    cout << "Enter the three digit no to check for armstrong : ";
    cin >> n;
    t = n;
    while (n != 0)
    {
        r = n % 10;
        d += r * r * r;
        n = n / 10;
    }
    if (t == d)
        cout << t << " is armstrong no";
    else
        cout << t << " is not armstrong no";
}
