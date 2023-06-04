#pragma once
#include<string>
#include "Owner.hpp"


class Account
{
private:
    std::string account_id;
    Person person;
    float balance;
    short int account_Type;

public:
    Account(std::string account_id, Person person, short int account_Type);
    ~Account();

    void withdraw(float toWithdraw);
    void deposit(float toDeposit);
    
    float getBalance();

    void get_AccountID(Account& ac);
    void show_balance(Account& ac); // outdated
    void show_OwnerID(Account& ac);
};