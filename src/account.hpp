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
    
    std::string get_OwnerCPF();
    float getBalance();

    void get_AccountID(Account& ac);
    void show_balance(Account& ac);
    void show_OwnerID(Account& ac);

    static int get_totalAccounts();
};