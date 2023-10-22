#include <iostream>

using namespace std;

class Account
{
    double balance;

    public:

    void getBalance()
    {
        cout << "Account Balance: " << balance << endl;
    }
    
    Account(double b = 352223.34)
    {
        balance = b;
    }
};

class BankAccount : public Account
{
    double balance;
    string name;
    string surname;

    public:
    
    BankAccount(double b, string n = "Szymon", string sn = "Tulodziecki")
    : Account(b)
    {
        name = n;
        surname = sn;
    }
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Surname: " << surname << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main()
{
    BankAccount myAccount;
    myAccount.display();

    return 0;
}