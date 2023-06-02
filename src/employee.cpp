#include "employee.hpp"
#include "person.hpp"

Employee::Employee(CPF cpf, std::string name, float salary)
:Person(cpf, name),salary(salary)
{
}