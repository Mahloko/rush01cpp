#ifndef __Date_CLASS__
#define __Date_CLASS__

#include <string>
#include <iostream>
#include <stdlib.h>

class Date
{
    private:
    public:
        Date(void);
        Date(Date const &copy);
        void getDate(void);
        Date &operator=(Date const &rhs);
        ~Date(void);
};

#endif /*Date_CLASS*/