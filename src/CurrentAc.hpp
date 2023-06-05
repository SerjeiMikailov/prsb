#pragma once
#include "account.hpp"

class CurrentAc final : public Account
{
    public:
        CurrentAc(std::string number, Person Person);
        float withdrawTax() const override;
        void transfer(Account& target, float value);
};