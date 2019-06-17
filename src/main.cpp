#include <iostream>
#include <ncurses.h>
#include <cstdlib>
#include <unistd.h>
#include <algorithm>
#include <sys/sysctl.h>
#include "Map.hpp"

char* getMachine( void )
{
    size_t  tst = 100;

    char    cpy[100];
    sysctlbyname("hw.model", &cpy, &tst, NULL, 0);
    char    *ret = cpy;
	return (ret);
}

int		main(void)
{

/* ************************************************************************** */
	//								WINDOW
	int	input;//,yMax, xMax;
	Map		map;

	Map		scr1(20, 50, 3, 3);
	map.newWindow();
	scr1.newWindow();
	refresh();
	halfdelay(1);
	while((input = getch()) != 'q')
	{
		clear();
		// map.mapBox();
		scr1.mapBox();
		mvwprintw(scr1.getWindow(), 12, 24, getMachine());
		map.display();
		scr1.display();
	}
/* ************************************************************************** */
	return (0);
}