#include "employee.hpp"
#include "person.hpp"

Employee::Employee(CPF cpf, std::string name, std::string password, float salary)
:Owner(cpf, name, password),salary(salary)
{
}