#include <iostream>
#include <ostream>
#include <string>
#include "account.cpp"
#include "account.hpp"
#include "Owner.cpp"
#include "Owner.hpp"

using namespace std;

int main()
{
    Owner owner("123.456.789-10", "Cleitin");

    cout << "Accounts in the system: " << Owner::get_totalAccounts() << endl;

    return 0;
}