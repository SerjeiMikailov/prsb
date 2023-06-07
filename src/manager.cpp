#include "manager.hpp"

Manager::Manager(CPF cpf, std::string name, std::string password, float salary)
:Employee(cpf,name, password, salary)
{
}

float Manager::bonus() const
{
    return salary * 0.5;
}