#pragma once
#include "employee.hpp"
#include "auth.hpp"

class Manager final : public Employee
{
    public:
        Manager(CPF cpf, std::string name, std::string password, float salary);
        float bonus() const;
};