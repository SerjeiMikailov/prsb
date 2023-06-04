#include "account.hpp"
#include<iostream>
#include "Owner.hpp"
#include<string>

// ac = account

Account::Account(std::string account_id, Owner Owner)
    :account_id(account_id),
     owner(owner),
     balance(0)
{
}
Account::~Account()
{
}

void Account::withdraw(float toWithdraw)
{
    float withdraw_tax = toWithdraw * 0.05;
    float withdraw_value = toWithdraw + withdraw_tax;

    if(toWithdraw < 0)
        {
            std::cout << "You can't withdraw negative values" << std::endl;
            return;
        } else if(withdraw_value> balance)
        {
            std::cout << "Insufficient balance" << std::endl;
        }
        balance -= withdraw_value;
        std::cout << "Withdraw Tax: " << withdraw_tax << std::endl;
        std::cout << "Withdraw Total: " << withdraw_value << std::endl;
}

void Account::deposit(float toDeposit)
{
    if(toDeposit < 0)
        {
            std::cout << "You can't deposit negative values" << std::endl;
            return;
        }

    balance += toDeposit;
    std::cout << "Deposited: " << toDeposit << std::endl;
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
