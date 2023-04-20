#include "account.hpp"
#include<iostream>
#include<string>

void Account::withdraw(float toWithdraw)
{
    if(toWithdraw < 0)
        {
            std::cout << "You can't withdraw negative values" << std::endl;
            return;
        } else if(toWithdraw > balance)
        {
            std::cout << "Insufficient balance" << std::endl;
        }
        balance -= toWithdraw;
}

void Account::deposit(float toDeposit)
{
    if(toDeposit < 0)
        {
            std::cout << "You can't deposit negative values" << std::endl;
            return;
        }

    balance += toDeposit;
}

void Account::def_OwnerName(std:: string name)
{
    ownerNAME = name;
}

void Account::def_accountID(std::string id)
{
    account_id = id;
}

void Account::def_OwnerCPF(std:: string cpf)
{
    ownerCPF = cpf;
}

std::string Account::get_OwnerNAME()
{
    return ownerNAME;
}

std::string Account::get_OwnerCPF()
{
    return ownerCPF;
}

std::string Account::get_AccountID()
{
    return account_id;
}

float Account::getBalance()
{
    return balance;
}