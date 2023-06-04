#include "CurrentAc.hpp"

CurrentAc::CurrentAc(std::string number, Person person):Account(number, person)
{
}

float CurrentAc::withdrawTax() const
{
    return 0.05;
}