#include <iostream>

using namespace std;

class Number
{
public:
    int num;
    Number(int num)
    {
        this->num = num;
    }
    void IsPrime()
    {
        int i;
        for (i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                cout << "Not Prime" << endl;
                break;
            }
        }
        if (i == num)
        {
            cout << "Prime" << endl;
        }
    }
};

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    Number n(num);
    n.IsPrime();
    return 0;
}
