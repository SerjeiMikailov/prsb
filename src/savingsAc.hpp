#pragma once
#include "account.hpp"

// Savings account

class savingsAc : public Account
{
    public:
        savingsAc(std::string number, Person person);
        void withdraw(float toWithdraw);
};
