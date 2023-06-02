#pragma once
#include <string>
#include "cpf.hpp"

class Owner
{   
    private:
        std::string name;
        CPF cpf;
        void verNameLenght();
    public:
        Owner(CPF cpf, std::string name);

        static int totalAccounts;
        static int get_totalAccounts();
};