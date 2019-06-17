#ifndef __Date_CLASS__
#define __Date_CLASS__

#include <list>
#include <string>
#include <fstream>
#include <stdlib.h>
#include <iostream>

class Date
{
    private:
    public:
        Date(void);
        Date(Date const &copy);
        std::list<std::string> getDate(void);
        // Date &operator=(Date const &rhs);
        ~Date(void);
};

#endif /*Date_CLASS*/