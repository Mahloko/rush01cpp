#ifndef __RAM_CLASS__
#define __RAM_CLASS__

#include <string>
#include <iostream>
#include <stdlib.h>

class Ram
{
    private:
    public:
        Ram(void);
        Ram(Ram const &copy);
        void getRam(void);
        Ram &operator=(Ram const &rhs);
        ~Ram(void);
};

#endif /*RAM_CLASS*/