#pragma once
#include <string>
#include "cpf.hpp"

class Person
{
    private:
        std::string name;
        CPF cpf;
        void verNameLenght();
        int static totalAccounts;
    public:
        Person(CPF cpf, std::string name);
        static int get_totalAccounts();
};