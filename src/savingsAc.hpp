#pragma once
#include "account.hpp"

// Savings account

class savingsAc final : public Account
{
    public:
        savingsAc(std::string number, Person person);
        float withdrawTax() const override;
};
