#pragma once
#include <string>

class CPF
{
private:
    std::string number;

public:
    CPF(std::string number);
    std::string getNumber();
};
