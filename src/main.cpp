#include <iostream>
#include <string>
#include "account.hpp"
#include "account.cpp"

using namespace std;

int main()
{
    Account ac1;
    Account ac2;

    ac1.def_OwnerName("Trump");
    ac1.def_accountID("12345");
    ac1.def_OwnerCPF("123456789-10");

    ac2.def_OwnerName("Biden");
    ac2.def_accountID("987654");
    ac2.def_OwnerCPF("9999999-10");

    cout << "The first account is: " << ac1.get_OwnerNAME() << ", his id is: " << ac1.get_AccountID() << ", his CPF is: " << ac1.get_OwnerCPF() << " and the balance is: " << ac1.getBalance() << endl;
    cout << "The second account is: " << ac2.get_OwnerNAME() << ", his id is: " << ac2.get_AccountID() << ", his CPF is: " << ac2.get_OwnerCPF() << " and the balance is: " << ac2.getBalance() << endl;

    return 0;
}