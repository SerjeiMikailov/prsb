#include "auth.hpp"

Auth::Auth(std::string password):password(password)
{
}

bool Auth::authenticator(std::string password) const
{
    return password == this->password;
}