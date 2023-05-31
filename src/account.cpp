#include "account.hpp"
#include<iostream>
#include<string>

// ac = account

Account::Account(std::string account_id, Owner owner)
    :account_id(account_id),
     owner(owner),
     balance(0)
{
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

float Account::getBalance()
{
    return balance;
}

void show_balance(Account& ac)
{
    std::cout << "Balance: ";
    std::cout << ac.getBalance() << std::endl;
}