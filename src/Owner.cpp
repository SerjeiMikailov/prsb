#include<iostream>
#include "Owner.hpp"
#include "cpf.hpp"

Owner::Owner(CPF cpf, std::string name): Person(cpf, name)
{
}