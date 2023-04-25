#pragma once
#include<string>

class Account
{
private:
    std::string account_id;
    std::string ownerCPF;
    std::string ownerNAME;
    float balance;

    static int totalAccounts;

public:
Account(std::string account_id, std::string ownerCPF, std::string ownerNAME);

    void withdraw(float toWithdraw);
    void deposit(float toDeposit);
    
    std::string get_OwnerCPF();
    std::string get_AccountID();
    std::string get_OwnerNAME();
    float getBalance();

    void show_balance(Account& ac);
    void show_OwnerCPF(Account& ac);
    void show_OwnerNAME(Account& ac);
    void show_OwnerID(Account& ac);

    static int get_totalAccounts;
};