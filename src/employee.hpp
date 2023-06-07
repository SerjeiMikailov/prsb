#pragma once
#include <string>
#include "cpf.hpp"
#include "person.hpp"
#include "Owner.hpp"
#include "auth.hpp"

class Employee : public Owner
{
    protected:
        float salary;
    public:
        Employee(CPF cpf, std::string name, std::string password, float salary);
        virtual float bonus() const = 0;
};