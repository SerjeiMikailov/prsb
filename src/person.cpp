#include "person.hpp"
#include <iostream>

Person::Person(CPF cpf, std::string name):cpf(cpf),name(name)
{
    totalAccounts++;
}

void Person::verNameLenght()
{
    if(name.size() < 5)
    {
        std::cout << "Short name" << std::endl;
        exit(1);
    }
}

int Person::totalAccounts = 0; // the number of persons in the system

int Person::get_totalAccounts()
    {
        return totalAccounts;
    }

std::string Person::get_name()
{
    return name;
}