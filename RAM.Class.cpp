#include "RAM.Class.hpp"

Ram::Ram(void){}

Ram::Ram(Ram const &copy)
{
    *this = copy;
    return;
}

void Ram::getRam(void)
{
    system("system_profiler SPHardwareDataType | grep Memory >> Ram.log");
}

Ram& Ram::operator=(Ram const &rhs)
{
    *this = rhs;
    return (*this);
}

Ram::~Ram(void){}