#include "OSInfo.Class.hpp"
#include "CPU.Class.hpp"
#include "Date.Class.hpp"
#include "Hostname.Class.hpp"
#include "RAM.Class.hpp"

#include <cstdlib>
#include <iostream>

int main(void)
{
    OSInfo *os = new OSInfo();
    Cpu *cpu = new Cpu();
    Date *date = new Date();
    Hostname *host = new Hostname();
    Ram *ram = new Ram();
    os->getOSInfo();
    cpu->getCpu();
    date->getDate();
    host->getHostname();
    ram->getRam();
    return (0);
}