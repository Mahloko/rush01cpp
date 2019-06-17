#ifndef __CPU_CLASS__
#define __CPU_CLASS__

#include <string>
#include <iostream>
#include <stdlib.h>

class Cpu
{
    private:
    public:
        Cpu(void);
        Cpu(Cpu const &copy);
        void getCpu(void);
        Cpu &operator=(Cpu const &rhs);
        ~Cpu(void);
};

#endif /*CPU_CLASS*/