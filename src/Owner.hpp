#pragma once
#include <string>

class Owner
{   
    private:
        std::string cpf;
        std::string name;

        void verNameLenght();
    public:
        Owner(std::string cpf, std::string name);

        static int totalAccounts;
        static int get_totalAccounts();
};