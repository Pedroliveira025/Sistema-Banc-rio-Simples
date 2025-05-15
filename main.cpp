#include <iostream>

#include "client.hpp"
#include "bankaccount.hpp"

using namespace std;

int main() {
    // Criação dos clientes
    Client client1("Ana", "111.111.111-11");
    Client client2("Bruno", "222.222.222-22");
    Client client3("Carla", "333.333.333-33");

    // Criação das contas bancárias com saldos iniciais
    BankAccount account1(1001, client1, 1000.0);
    BankAccount account2(1002, client2);
    BankAccount account3(1003, client3);

    // Exibe o saldo inicial da conta de Ana
    account1.displayBalance();

    // Ana transfere R$200 para Bruno
    account1.transaction(200.0, account2);

    // Ana transfere R$300 divididos entre Bruno e Carla
    account1.transaction(300.0, account2, account3);

    // Exibição dos saldos finais
    cout << endl;
    account1.displayInformation();
    account2.displayInformation();
    account3.displayInformation();


    return 0;
}
