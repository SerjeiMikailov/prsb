#include <iostream>
#include  "savingsAc.hpp"

savingsAc::savingsAc(std::string number, Person person):Account(number, person)
{
}

float savingsAc::withdrawTax() const
{
    return 0.03;
}