#ifndef __OSINFO_CLASS__
#define __OSINFO_CLASS__

#include <list>
#include <string>
#include <fstream>
#include <iostream>
#include <stdlib.h>

class OSInfo
{
    private:
    public:
        OSInfo(void);
        OSInfo(OSInfo const &copy);
        std::list<std::string> getOSInfo(void);
        // OSInfo &operator=(OSInfo const &rhs);
        ~OSInfo(void);
};

#endif /*OSINFO_CLASS*/