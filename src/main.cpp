#include <iostream>
#include <ostream>
#include <string>
/////////////////////
#include "account.hpp"
#include "Owner.hpp"
#include "cpf.hpp"

using namespace std;

int main()
{
    Person Person(string("123.456.789-10"), "Cleitin");

    cout << "Person: " << Person.get_name() << endl;

    cout << "Persons in the system: " << Person::get_totalAccounts() << endl;

    return 0;
}