#pragma once
#include <string>
#include "person.hpp"
#include "cpf.hpp"

class Owner : public Person
{   
    public:
        Owner(CPF cpf, std::string name);
};