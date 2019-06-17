#ifndef __Date_CLASS__
#define __Date_CLASS__

#include "IMonitorModule.hpp"

class Date : public IMonitorModule
{
    private:
    public:
        Date(void);
        Date(Date const &copy);
        void monitor(void);
        Date &operator=(Date const &rhs);
        ~Date(void);
};

#endif /*Date_CLASS*/