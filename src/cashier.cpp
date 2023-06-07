#include "cashier.hpp"

Cashier::Cashier(CPF cpf, std::string name, std::string password, float salary):Employee(cpf,name,password,salary)
{

}

float Cashier::bonus() const
{
    return salary * 0.1;
}