#include <iostream>
#include <ostream>
#include <string>
/////////////////////
#include "cpf.hpp"
#include "Owner.hpp"
#include "account.hpp"

using namespace std;

class Owner;
class Account;

int main()
{
    Owner owner(CPF("123.456.789-10"), "Cleitin");
    Account account("34324", owner);

    //cout << "Person: " << Cleitin1.get_name() << endl;

    //cleitin.deposit(400);
    //cleitin.withdraw(200);

    cout << "Persons in the system: " << Person::get_totalAccounts() << endl;

    return 0;
}