#include <iostream>
#include <ostream>
#include <string>
#include "account.hpp"
#include "account.cpp"

using namespace std;

void show_balance(Account& ac)
{
    cout << ac.getBalance() << endl;
}

int main()
{
    Account firstAccount("123456", "123456789-10", "Cleiton" );

    cout << "Name: " << firstAccount.get_OwnerNAME() << " ID: " << firstAccount.get_AccountID() << " CPF: " << firstAccount.get_OwnerCPF() << endl;
    cout << "Balance: ";
    show_balance(firstAccount);
    

    return 0;
}