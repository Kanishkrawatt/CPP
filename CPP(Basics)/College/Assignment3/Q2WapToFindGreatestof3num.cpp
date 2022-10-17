#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "Kanishk" << endl;
    cout << "07129802021" << endl;
    int a, b, c, max;
    cout << "Enter values of a , b and c : ";
    cin >> a >> b >> c;
    max = a > b ? (a > c ? a : c) : (b > c ? b : c);
    cout << "The maximum of three no's is : " << max;
}
