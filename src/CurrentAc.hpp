#pragma once
#include "account.hpp"

class CurrentAc final : public Account
{
    public:
        CurrentAc(std::string number, Owner owner);
        float withdrawTax() const override;
        void transfer(Account& target, float value);
};