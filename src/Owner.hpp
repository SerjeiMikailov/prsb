#pragma once
#include <string>
#include "person.hpp"
#include "cpf.hpp"
#include "auth.hpp"

class Owner : public Person, public Auth
{   
    public:
        Owner(CPF cpf, std::string name, std::string password);
};