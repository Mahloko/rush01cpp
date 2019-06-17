#ifndef __IMONITOR_MODULE__
#define __IMONITOR_MODULE__

#include <string>
#include <iostream>
#include <cstdlib>

class IMonitorModule
{
    public:
     virtual void monitor(void) = 0;
};

#endif /*IMONITOR_MODULE*/