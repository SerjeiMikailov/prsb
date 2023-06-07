#pragma once
#include "employee.hpp"

class Cashier final : public Employee
{
    public:
        Cashier(CPF cpf, std::string name, std::string password, float salary);
        float bonus() const;
};