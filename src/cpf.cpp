#include <string>
#include <iostream>
#include "cpf.hpp"

CPF::CPF(std::string number):number(number)
{
    //if(CPF.length() < 15) {
        //std::cout << "Short CPF" << std::endl;
        //exit(1);
    //}
}

std::string CPF::getNumber()
{
    return number;
}