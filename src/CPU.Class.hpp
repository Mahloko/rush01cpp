#ifndef __CPU_CLASS__
#define __CPU_CLASS__

#include "IMonitorModule.hpp"
class Cpu : public IMonitorModule
{
    private:
    public:
        Cpu(void);
        Cpu(Cpu const &copy);
        // std::list<std::string> getCpu(void);
        virtual std::list<std::string> getInfo();
        // Cpu &operator=(Cpu const &rhs);
        ~Cpu(void);
};

#endif /*CPU_CLASS*/