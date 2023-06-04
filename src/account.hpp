#pragma once
#include<string>
#include "Owner.hpp"


class Account
{
private:
    std::string account_id;
    Owner owner;
    float balance;

public:
    Account(std::string account_id, Owner owner);
    ~Account();

    void withdraw(float toWithdraw);
    void deposit(float toDeposit);
    
    float getBalance();

    void get_AccountID(Account& ac);
    void show_balance(Account& ac);
    void show_OwnerID(Account& ac);
};