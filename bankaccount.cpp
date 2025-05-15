#include "bankaccount.hpp"

#include <iostream>

#include "client.hpp"

BankAccount::BankAccount(int _number, Client _Holder, double _balance) {
    number = _number;
    Holder = _Holder;
    balance = _balance;
}

void BankAccount::deposit(double value)
{
    if (value < 0) {
        cout << "operação inválida" << endl;
    } else {
        balance += value;
    }
}

void BankAccount::withdraw(double value)
{
    if (value > balance) {
        cout << "saldo insuficiente" << endl;
    } else if ( value < 0) {
        cout << "operação inválida" << endl;
    } else {
        balance -= value;
    }
}

void BankAccount::transaction(double value, BankAccount &recipient)
{
    if (value > balance) {
        cout << "saldo insuficiente" << endl;
    }
    else if ( value < 0) {
        cout << "operação inválida" << endl;
    }
    else {
        balance -= value;
        recipient.balance += value;
        cout << "Transferido: R$ " << value << " da conta " << number << " para a conta " << recipient.number << endl;
    }
}

void BankAccount::transaction(double value, BankAccount &recipient1, BankAccount &recipient2)
{
    if (value > balance) {
        cout << "saldo insuficiente" << endl;
    }
    else if ( value < 0) {
        cout << "operação inválida" << endl;
    }
    else {
        balance -= value;
        recipient1.balance += value / 2.0;
        recipient2.balance += value / 2.0;
        cout << "Transferido: R$ " << value / 2.0 << " para cada conta (" << recipient1.number << " e " << recipient2.number << ") da conta " << number << endl;
    }
}

void BankAccount::displayBalance()
{
    cout << "Saldo atual da conta " << number << ": R$ " << balance << endl;
}

void BankAccount::displayInformation()
{
    cout << "Titular: " << Holder.getName() << ", CPF: " << Holder.getCPF() << endl;
    displayBalance();
}
