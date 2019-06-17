#ifndef __HOSTNAME_CLASS__
#define __HOSTNAME_CLASS__

#include <string>
#include <iostream>
#include <list>
#include <stdlib.h>
#include <fstream>

class Hostname
{
    private:
    public:
        Hostname(void);
        Hostname(Hostname const &copy);
        std::list<std::string> getHostname(void);
        // Hostname &operator=(Hostname const &rhs);
        ~Hostname(void);
};

#endif /*HOSTNAME_CLASS*/