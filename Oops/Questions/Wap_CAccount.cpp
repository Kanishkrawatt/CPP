// Write a class called CAccount which contains two private data elements, an integer accountNumber, and a floating point accountBalance, and three member functions:
// A constructor that allows the user to set initial values for accountNumber and accountBalance and a default constructor that prompts for the input of the values for the above data numbers.
// A function called inputTransaction, which reads a character value for transactionType(‘D’ for deposit and ‘W’ for withdrawal), and a floating point value for transactionAmount, which updates accountBalance.
// A function called printBalance, that prints on the screen the accountNumber and accountBalance.

#include <iostream>
using namespace std;
class CAccount
{
private:
    int accountNumber;
    float accountBalance;

public:
    CAccount()
    {
        cout << "Enter Account Number : ";
        cin >> accountNumber;
        cout << "Enter Account Balance : ";
        cin >> accountBalance;
    }
    CAccount(int a, int b)
    {
        accountNumber = a;
        accountBalance = b;
    }
    void inputTransaction()
    {
        char transactionType;
        float transactionAmount;
        cout << "Enter Transaction Type :(D/W) ";
        cin >> transactionType;
        if (transactionType == 'D')
        {
            cout << "Enter Transaction Amount : ";
            cin >> transactionAmount;
            accountBalance += transactionAmount;
        }
        else if (transactionType == 'W')
        {
            cout << "Enter Transaction Amount : ";
            cin >> transactionAmount;
            accountBalance -= transactionAmount;
        }
        else
        {
            cout << "Invalid Transaction Type" << endl;
        }
    }
    void printBalance()
    {
        cout << "Account Number : " << accountNumber << endl;
        cout << "Account Balance : " << accountBalance << endl;
    }
};
int main()
{
    cout << "Kanishk" << endl;
    cout << "07129802021" << endl;
    CAccount c1;
    c1.inputTransaction();
    c1.printBalance();
    CAccount c2(1, 2);
    c2.inputTransaction();
    c2.printBalance();
}