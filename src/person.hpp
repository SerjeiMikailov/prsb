#pragma once
#include <string>
#include "cpf.hpp"
#include "auth.hpp"

class Person
{
    protected:
        std::string name; 
        CPF cpf;
        void verNameLenght();
        int static totalAccounts;
    public:
        Person(CPF cpf, std::string name);
        static int get_totalAccounts();
        std::string get_name();
};