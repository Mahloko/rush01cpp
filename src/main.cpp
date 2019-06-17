#include "Map.hpp"
#include <cstdlib>
#include <unistd.h>
#include <unistd.h>
#include <iostream>
#include <algorithm>
#include <ncurses.h>
#include "RAM.Class.hpp"
#include "CPU.Class.hpp"
#include "Date.Class.hpp"
#include "OSInfo.Class.hpp"
#include "Hostname.Class.hpp"

int		main(void)
{
/* ************************************************************************** */
	//								WINDOW
	int	input;//,yMax, xMax;
	Map			map;
	Cpu			cpu;
	Hostname	hst;
	OSInfo		os;
	Date		date;
	Ram			ram;


	Map		scr1(20, 60, 3, 3);
	Map		scr2(20, 60, 3, 63);
	Map		scr3(20, 60, 3, 125);
	map.newWindow();
	scr1.newWindow();
	scr2.newWindow();
	scr3.newWindow();
	halfdelay(1);
	while((input = getch()) != 'q')
	{
		clear();
		scr1.fillMeIn(cpu.getCpu());
		scr2.fillMeIn(hst.getHostname());
		mvwprintw(scr2.getWindow(), 2, 1, static_cast<std::string>(*(date.getDate().begin())).c_str());
		mvwprintw(scr2.getWindow(), 3, 1, static_cast<std::string>(*(ram.getRam().begin())).c_str());
		scr3.fillMeIn(os.getOSInfo());
		scr1.mapBox();
		scr2.mapBox();
		scr3.mapBox();
		map.display();
		scr1.display();
		scr2.display();
		scr3.display();
	}
	// sleep(100);
	getch();
/* ************************************************************************** */
	return (0);
}