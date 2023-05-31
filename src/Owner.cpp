#include<iostream>
#include "Owner.hpp"

int Owner::totalAccounts = 0; // the number of accounts in the system

Owner::Owner(std::string cpf, std::string name):cpf(cpf),name(name)
{
    verNameLenght();
    totalAccounts++;
}

void Owner::verNameLenght()
{
    if(name.size() < 5)
    {
        std::cout << "Short name" << std::endl;
        exit(1);
    }
}

int Owner::get_totalAccounts()
    {
        return totalAccounts;
    }
