#include <iostream>
#include <ostream>
#include <string>
#include "account.hpp"
#include "Owner.hpp"
#include "cpf.hpp"

using namespace std;

int main()
{
    Owner owner(string("123.456.789-10"), "Cleitin");

    cout << "Accounts in the system: " << Owner::get_totalAccounts() << endl;

    return 0;
}