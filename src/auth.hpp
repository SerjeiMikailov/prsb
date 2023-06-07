#pragma once 
#include <string>

class Auth
{
    protected:
        std::string password;
    public:
        Auth(std::string password);
        bool authenticator(std::string password) const;
};