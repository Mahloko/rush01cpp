#ifndef __OSINFO_CLASS__
#define __OSINFO_CLASS__

#include "IMonitorModule.hpp"

class OSInfo : public IMonitorModule
{
    private:
    public:
        OSInfo(void);
        OSInfo(OSInfo const &copy);
        void monitor(void);
        OSInfo &operator=(OSInfo const &rhs);
        ~OSInfo(void);
};

#endif /*OSINFO_CLASS*/