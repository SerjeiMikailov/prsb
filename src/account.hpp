#pragma once
#include<string>

class Account
{
private:
    std::string account_id;
    std::string ownerCPF;
    std::string ownerNAME;
    float balance = 0;

public:
    void withdraw(float toWithdraw);
    void deposit(float toDeposit);
    void def_OwnerName(std::string name);
    void def_accountID(std::string id);
    void def_OwnerCPF(std::string cpf);

    std::string get_OwnerCPF();
    std::string get_AccountID();
    std::string get_OwnerNAME();
    float getBalance();
};