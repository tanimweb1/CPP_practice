/*Create a BankAccount class with private members accountNumber
and balance. Write a friend function compareBalance() that accepts
two BankAccount objects and determines which account has the greater balance. */

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

    friend void compareBalance(BankAccount a, BankAccount b);
};

void compareBalance(BankAccount a, BankAccount b)
{
    if (a.balance > b.balance)
    {
        cout << "Tanim have besi taka" << endl;
    }
    else if (b.balance > a.balance)
    {
        cout << "Afif have besi taka" << endl;
    }
    else
    {
        cout << "Both have same taka" << endl;
    }
}

int main()
{
    BankAccount tanim(98, 10000);
    BankAccount Afif(25, 10000);

    compareBalance(tanim, Afif);

    return 0;
}