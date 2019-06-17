#ifndef __CPU_CLASS__
#define __CPU_CLASS__

#include <string>
#include <iostream>
#include <stdlib.h>
#include <list>

class Cpu 
{
    private:
    public:
        Cpu(void);
        Cpu(Cpu const &copy);
        std::list<std::string> getCpu(void);
        // Cpu &operator=(Cpu const &rhs);
        ~Cpu(void);
};

#endif /*CPU_CLASS*/