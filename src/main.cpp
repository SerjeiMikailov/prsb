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
    Account cleitin("34324", person1);

    cout << "Person: " << person1.get_name() << endl;

    cleitin.deposit(400);
    cleitin.withdraw(200);
    cout << "Money: " << cleitin.getBalance() << endl;

    cout << "Persons in the system: " << Person::get_totalAccounts() << endl;

    return 0;
}