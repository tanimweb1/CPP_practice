/* Practice Problem 3 — Friend Class
Create a BankAccount class with private members accountNumber and balance.
Declare a BankManager class as a friend class.
The BankManager class should access the private members and display the account number and balance. */
#include <bits/stdc++.h>
using namespace std;

class BankAccount
{
private:
    int accountNumber;
    int balance;

public:
    BankAccount(int a, int b)
    {
        accountNumber = a;
        balance = b;
    }

    friend class BankManager;
};

class BankManager
{
public:
    void Display(BankAccount Tanim, BankAccount Afif)
    {
        cout << Tanim.accountNumber << endl
             << Tanim.balance << endl;

        cout << Afif.accountNumber << endl
             << Afif.balance;
    }
};

int main()
{

    BankAccount Tanim(98, 20000);
    BankAccount Afif(25, 40000);
    BankManager p;
    p.Display(Tanim, Afif);

    return 0;
}