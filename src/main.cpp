#include <iostream>
#include <ostream>
#include <string>
/////////////////////
#include "cpf.hpp"
#include "savingsAc.hpp"
#include "account.hpp"
#include "CurrentAc.hpp"

using namespace std;

void Dwithdraw(Account& account, float value)
{
    account.withdraw(value);
}

int main()
{
    cout << "/////////////////////////////////" << endl;

    Person person1(CPF("123.456.789-10"), "Cleitin");
    CurrentAc cleitin("34324", person1);

    cout << "Person: " << person1.get_name() << endl;

    cleitin.deposit(4000);
    Dwithdraw(cleitin, 300);
    cout << "Money: " << cleitin.getBalance() << endl;

    cout << "/////////////////////////////////" << endl;

    Person person2(CPF("123.456.789-10"), "Pedrin");
    savingsAc pedrin("3432454", person2);

    cout << "Person: " << person2.get_name() << endl;

    pedrin.deposit(3000);
    Dwithdraw(pedrin, 400);
    cleitin.transfer(pedrin, 50);

    cout << "Money: " << pedrin.getBalance() << endl;

    cout << "/////////////////////////////////" << endl;

    cout << "Persons in the system: " << Person::get_totalAccounts() << endl;

    return 0;
}