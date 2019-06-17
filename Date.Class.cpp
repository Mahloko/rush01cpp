#include "Date.Class.hpp"

Date::Date(void){}

Date::Date(Date const &copy)
{
    *this = copy;
    return;
}

void Date::getDate(void)
{
    system("date >> date.log");
}

Date& Date::operator=(Date const &rhs)
{
    *this = rhs;
    return (*this);
}

Date::~Date(void){}