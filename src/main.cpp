#include <iostream>
#include <ostream>
#include <string>
#include "account.hpp"
#include "account.cpp"

using namespace std;

int main()
{
    Account firstAccount("123456", "123456789-10", "Cleitin" );
    Account secondAccount("999999", "99999999-11", "Pedrin" );
    Account thirdAccount("987654", "25437645-11", "Clebin" );

    show_OwnerNAME(firstAccount);
    show_OwnerCPF(firstAccount);
    show_OwnerID(firstAccount);
    show_balance(firstAccount);
    
    show_OwnerNAME(secondAccount);
    show_OwnerCPF(secondAccount);
    show_OwnerID(secondAccount);
    show_balance(secondAccount);

    show_OwnerNAME(thirdAccount);
    show_OwnerCPF(thirdAccount);
    show_OwnerID(thirdAccount);
    show_balance(thirdAccount);

    cout << "Accounts in the system: " << totalAccounts << endl;

    return 0;
}