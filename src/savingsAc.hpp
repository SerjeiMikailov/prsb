#pragma once
#include "account.hpp"

// Savings account

class savingsAc final : public Account
{
    public:
        savingsAc(std::string number, Owner owner);
        float withdrawTax() const override;
};
