#include <iostream>
#include <ostream>
#include <string>
#include "account.hpp"
#include "account.cpp"

using namespace std;

int main()
{
    Account firstAccount("123456", "123456789-10", "Cleiton" );
    Account secondAccount("999999", "888888888-11", "Pedrin" );

    show_OwnerNAME(firstAccount);
    show_OwnerCPF(firstAccount);
    show_OwnerID(firstAccount);
    show_balance(firstAccount);
    
    show_OwnerNAME(secondAccount);
    show_OwnerCPF(secondAccount);
    show_OwnerID(secondAccount);
    show_balance(secondAccount);

    return 0;
}