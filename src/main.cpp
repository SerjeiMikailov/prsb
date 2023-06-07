#include <iostream>
#include <ostream>
#include <string>
/////////////////////
#include "cpf.hpp"
#include "Owner.hpp"
#include "savingsAc.hpp"
#include "CurrentAc.hpp"
#include "manager.hpp"
#include "cashier.hpp"

using namespace std;

void Dwithdraw(Account& account, float value)
{
    account.withdraw(value);
}

int main()
{
    cout << "/////////////////////////////////" << endl;

    Owner person1(CPF("123.456.789-10"), "Cleitin", "umasenha");
    CurrentAc cleitin("34324", person1);

    cout << "Person: " << person1.get_name() << endl;

    cleitin.deposit(4000);
    Dwithdraw(cleitin, 300);
    cout << "Money: " << cleitin.getBalance() << endl;

    cout << "/////////////////////////////////" << endl;

    Owner person2(CPF("123.456.789-10"), "Pedrin", "outrasenha");
    savingsAc pedrin("3432454", person2);

    cout << "Person: " << person2.get_name() << endl;

    pedrin.deposit(3000);
    Dwithdraw(pedrin, 400);
    cleitin.transfer(pedrin, 50);

    cout << "Money: " << pedrin.getBalance() << endl;

    cout << "/////////////////////////////////" << endl;

    Cashier joseph(CPF("2323232394"), "Joseph", "josephsenha", 850);
    cout << "Cashier: " << joseph.get_name() << endl;

    cout << "/////////////////////////////////" << endl;

    Manager osvaldo(CPF("2323232394"), "Osvaldo", "osvaldosenha", 850);
    cout << "Manager: " << osvaldo.get_name() << endl;

    cout << "/////////////////////////////////" << endl;

    cout << "Persons in the system: " << Person::get_totalAccounts() << endl;

    return 0;
}