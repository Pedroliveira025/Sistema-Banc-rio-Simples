#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include "client.hpp"

class BankAccount
{
    private:
        int number;
        double balance;
        Client Holder;
    public:
        BankAccount(int _number, Client _Holder, double balance = 0);
        void deposit(double value);
        void withdraw(double value);
        void transaction(double value, BankAccount &recipient);
        void transaction(double value, BankAccount &recipient1, BankAccount &recipient2);
        void displayBalance();
        void displayInformation();
};

#endif
