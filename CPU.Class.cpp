#include "CPU.Class.hpp"

Cpu::Cpu(void){}

Cpu::Cpu(Cpu const &copy)
{
    *this = copy;
    return;
}

void Cpu::getCpu(void)
{
    system("system_profiler SPHardwareDataType >> Cpu.log");
}

Cpu& Cpu::operator=(Cpu const &rhs)
{
    *this = rhs;
    return (*this);
}

Cpu::~Cpu(void){}