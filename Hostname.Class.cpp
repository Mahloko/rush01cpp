#include "Hostname.Class.hpp"

Hostname::Hostname(void){}

Hostname::Hostname(Hostname const &copy)
{
    *this = copy;
    return;
}

void Hostname::getHostname(void)
{
    system("hostname >> Hostname.log");
}

Hostname& Hostname::operator=(Hostname const &rhs)
{
    *this = rhs;
    return (*this);
}

Hostname::~Hostname(void){}