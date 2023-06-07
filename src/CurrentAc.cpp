#include <iostream>
#include "CurrentAc.hpp"

CurrentAc::CurrentAc(std::string number, Owner owner):Account(number, owner)
{
}

float CurrentAc::withdrawTax() const
{
    return 0.05;
}

void CurrentAc::transfer(Account& target, float value)
{
    Transfer_withdraw(value);
    float tax = value * withdrawTax();
    value = value - tax;
    target.Transfer_deposit(value);

    std::cout << "Transfer received in value of: " << value << std::endl;
}           