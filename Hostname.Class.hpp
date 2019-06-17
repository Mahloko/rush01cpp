#ifndef __HOSTNAME_CLASS__
#define __HOSTNAME_CLASS__

#include <string>
#include <iostream>
#include <stdlib.h>

class Hostname
{
    private:
    public:
        Hostname(void);
        Hostname(Hostname const &copy);
        void getHostname(void);
        Hostname &operator=(Hostname const &rhs);
        ~Hostname(void);
};

#endif /*HOSTNAME_CLASS*/