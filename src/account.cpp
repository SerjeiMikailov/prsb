#include "account.hpp"
#include<iostream>
#include "Owner.hpp"
#include<string>

// ac = account

Account::Account(std::string account_id, Person person, short int account_Type)
    :account_id(account_id),
     person(person),
     account_Type(account_Type),
     balance(0)
{
}
Account::~Account()
{
}

void Account::withdraw(float toWithdraw)
{   
    float tax = account_Type == 1 ? 0.05 : 0.03;
    float withdraw_tax = toWithdraw * tax;
    float withdraw_value = toWithdraw - withdraw_tax;

    if(toWithdraw < 0)
        {
            std::cout << "You can't withdraw negative values" << std::endl;
            return;
        } else if(withdraw_value> balance)
        {
            std::cout << "Insufficient balance" << std::endl;
        }
        balance -= withdraw_value;
        std::cout << "Wants to Withdraw: " << toWithdraw << std::endl;
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

void Account::show_balance(Account& ac) // outdated
{
    std::cout << "Balance: ";
    std::cout << ac.getBalance() << std::endl;
}
