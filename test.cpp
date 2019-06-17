#include "OSInfo.Class.hpp"
#include "CPU.Class.hpp"
#include "Date.Class.hpp"
#include "Hostname.Class.hpp"
#include "RAM.Class.hpp"

#include <cstdlib>
#include <iostream>

int main(void)
{
    IMonitorModule *os = new OSInfo();
    IMonitorModule *cpu = new Cpu();
    IMonitorModule *date = new Date();
    IMonitorModule *host = new Hostname();
    IMonitorModule *ram = new Ram();
    os->monitor();
    cpu->monitor();
    date->monitor();
    host->monitor();
    ram->monitor();
    return (0);
}