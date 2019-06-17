#include <stdio.h>
#include <cstdlib>
#include <list>
#include <iostream>
#include <fstream>
#include <string>
#include <dirent.h>

int 	main()
{
	std::ifstream 				file_from_stream("file");
	std::string 				line;
	std::list<std::string>		stuff_from_file;

	/*
	 * delete file, has all the info about sys
	 * needs refining
	*/

	if ( file_from_stream.good() )
		system("rm file");
	system("hostname >> file");
	system("sw_vers >> file");
	system("date >> date_file");

	/*
	 * check if filestream is open and read contents
	 * into list container
	*/

	if ( file_from_stream.is_open() ) { 
		while ( getline ( file_from_stream, line) ) 
		{
			stuff_from_file.push_back(line);
		}
	}
	
	/*
	 * MAKE function for opening and reading stuff from files!
	 * add date to end of list, TBD
	 * create iterators to navigate list and then display contents
	*/

	std::list<std::string>::const_iterator 		it = stuff_from_file.begin();
	std::list<std::string>::const_iterator		ite = stuff_from_file.end();
	while ( it != ite )
	{
		std::cout << *it << std::endl;
		it++;
	}
	
	/*
	 * clean up
	 * clear list and close filestream
	 */

	stuff_from_file.clear();
	file_from_stream.close();
	return (0);
}
