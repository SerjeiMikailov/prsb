#pragma once
#include<string>
#include "Owner.hpp"
#include "person.hpp"


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
    void Transfer_withdraw(float toWithdraw);
    void withdraw(float toWithdraw);
    void Transfer_deposit(float toDeposit);
    void deposit(float toDeposit);
    
    float getBalance();

    void get_AccountID(Account& ac);
    void show_balance(Account& ac); // outdated
    void show_OwnerID(Account& ac);
};