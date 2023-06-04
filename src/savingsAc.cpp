#include <iostream>
#include  "savingsAc.hpp"

savingsAc::savingsAc(std::string number, Person person):Account(number, person)
{
}

void savingsAc::withdraw(float toWithdraw)
{   
    float tax = 0.03;  
    float withdraw_tax = toWithdraw * tax;
    float withdraw_value = toWithdraw - withdraw_tax;

    if(toWithdraw < 0)
        {
            std::cout << "You can't withdraw negative values" << std::endl;
            return;
        } else if(withdraw_value> balance)
        {
            std::cout << "Insufficient balance" << std::endl;
        }
        balance -= withdraw_value;
        std::cout << "Wants to Withdraw: " << toWithdraw << std::endl;
        std::cout << "Withdraw Tax: " << withdraw_tax << std::endl;
        std::cout << "Withdraw Total: " << withdraw_value << std::endl;
}