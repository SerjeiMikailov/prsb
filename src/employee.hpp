#pragma once
#include <string>
#include "cpf.hpp"
#include "person.hpp"

class Employee : public Person
{
    private:
        float salary;
    public:
        Employee(CPF cpf, std::string name, float salary);
};