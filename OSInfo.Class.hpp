#ifndef __OSINFO_CLASS__
#define __OSINFO_CLASS__

#include <string>
#include <iostream>
#include <stdlib.h>

class OSInfo
{
    private:
    public:
        OSInfo(void);
        OSInfo(OSInfo const &copy);
        void getOSInfo(void);
        OSInfo &operator=(OSInfo const &rhs);
        ~OSInfo(void);
};

#endif /*OSINFO_CLASS*/