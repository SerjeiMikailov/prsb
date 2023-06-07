#include <iostream>
#include  "savingsAc.hpp"

savingsAc::savingsAc(std::string number, Owner owner):Account(number, owner)
{
}

float savingsAc::withdrawTax() const
{
    return 0.03;
}