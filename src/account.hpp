#pragma once
#include<string>
#include "Owner.hpp"


class Account
{
private:
    std::string account_id;
    Person person;
    float balance;

public:
    Account(std::string account_id, Person person);
    ~Account();

    void withdraw(float toWithdraw);
    void deposit(float toDeposit);
    
    float getBalance();

    void get_AccountID(Account& ac);
    void show_balance(Account& ac); // outdated
    void show_OwnerID(Account& ac);
};