#include "OSInfo.Class.hpp"

OSInfo::OSInfo(void){}

OSInfo::OSInfo(OSInfo const &copy)
{
    *this = copy;
    return;
}

void OSInfo::monitor(void)
{
    system("sw_vers >> osinfo.log");
}

OSInfo& OSInfo::operator=(OSInfo const &rhs)
{
    *this = rhs;
    return (*this);
}

OSInfo::~OSInfo(void){}