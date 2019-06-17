#ifndef __RAM_CLASS__
#define __RAM_CLASS__

#include <list>
#include <string>
#include <fstream>
#include <iostream>
#include <stdlib.h>

class Ram
{
    private:
    public:
        Ram(void);
        Ram(Ram const &copy);
        std::list<std::string> getRam(void);
        // Ram &operator=(Ram const &rhs);
        ~Ram(void);
};

#endif /*RAM_CLASS*/