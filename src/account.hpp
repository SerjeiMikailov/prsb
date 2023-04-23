#pragma once
#include<string>

class Account
{
private:
    std::string account_id;
    std::string ownerCPF;
    std::string ownerNAME;
    float balance;

public:
Account(std::string account_id, std::string ownerCPF, std::string ownerNAME);

    void withdraw(float toWithdraw);
    void deposit(float toDeposit);
    
    std::string get_OwnerCPF();
    std::string get_AccountID();
    std::string get_OwnerNAME();
    float getBalance();
};