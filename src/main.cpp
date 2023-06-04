#include <iostream>
#include <ostream>
#include <string>
/////////////////////
#include "cpf.hpp"
#include "Owner.hpp"
#include "account.hpp"

using namespace std;

int main()
{
    Person person1(CPF("123.456.789-10"), "Cleitin");
    Account cleitin("34324", person1, 1);

    cout << "Person: " << person1.get_name() << endl;

    cleitin.deposit(400);
    cleitin.withdraw(200);
    cout << "Money: " << cleitin.getBalance() << endl;

    Person person2(CPF("123.456.789-10"), "Pedrin");
    Account pedrin("34324", person2, 2);

    cout << "Person: " << person2.get_name() << endl;

    pedrin.deposit(3000);
    pedrin.withdraw(2600);
    cout << "Money: " << pedrin.getBalance() << endl;


    cout << "Persons in the system: " << Person::get_totalAccounts() << endl;

    return 0;
}