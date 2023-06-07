#include<iostream>
#include "Owner.hpp"
#include "cpf.hpp"
#include "auth.hpp"


Owner::Owner(CPF cpf, std::string name, std::string password): Person(cpf, name),Auth(password)
{
}