#include <iostream>

using namespace std;

inline int square(int x)
{
    return x * x;
}

int main()
{
    int x = 5;
    cout << square(x) << endl;
    return 0;
}