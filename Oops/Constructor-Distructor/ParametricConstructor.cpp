#include <bits/stdc++.h>

using namespace std;

class Constructor
{
public:
    int num;
    Constructor(int num)
    {
        this->num = num;
    }
};
int main()
{
    Constructor C2(20);
    cout << "This is Parametric Constructor  : " << C2.num << endl; // Parameteric Constructor
}