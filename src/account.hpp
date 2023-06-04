#pragma once
#include<string>
#include "Owner.hpp"


class Account
{
protected:
    std::string account_id;
    Person person;
    float balance;

public:
    Account(std::string account_id, Person person);
    virtual ~Account();

    virtual float withdrawTax() const = 0;
    void withdraw(float toWithdraw);
    void deposit(float toDeposit);
    
    float getBalance();

    void get_AccountID(Account& ac);
    void show_balance(Account& ac); // outdated
    void show_OwnerID(Account& ac);
};