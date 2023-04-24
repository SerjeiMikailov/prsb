#include "account.hpp"
#include<iostream>
#include<string>

// ac always = account

Account::Account(std::string account_id, std::string ownerCPF, std::string ownerNAME)
{
    this->ownerNAME = ownerNAME;
    this->account_id = account_id;
    this->ownerCPF = ownerCPF;
    this->balance = 0;
}

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

void show_balance(Account& ac)
{
    std::cout << "Balance: ";
    std::cout << ac.getBalance() << std::endl;
}

void show_OwnerCPF(Account& ac)
{
    std::cout << "CPF: ";
    std::cout << ac.get_OwnerCPF() << std::endl;
}

void show_OwnerNAME(Account& ac)
{
    std::cout << "Name: ";
    std::cout << ac.get_OwnerNAME() << std::endl;
}

void show_OwnerID(Account& ac)
{
    std::cout << "OwnerID: ";
    std::cout << ac.get_AccountID() << std::endl;
}