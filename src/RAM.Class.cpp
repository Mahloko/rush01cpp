#include "RAM.Class.hpp"

Ram::Ram(void){}

Ram::Ram(Ram const &copy)
{
    *this = copy;
    return;
}

std::list<std::string> Ram::getInfo(void)
{
    std::ifstream 				file_from_stream("Ram.log");
	std::string 				line;
	std::list<std::string>		stuff_from_file;

    /*
	 * delete file, has all the info about sys
	 * needs refining
	*/
    if ( file_from_stream.good() )
		system("rm Ram.log");
    system("system_profiler SPHardwareDataType | grep Memory >> Ram.log");

	/*
	 * check if filestream is open and read contents
	 * into list container
	*/
	if ( file_from_stream.is_open() )
		while ( getline ( file_from_stream, line) ) 
			stuff_from_file.push_back(line);
    /*
	 * clean up
	 * clear list and close filestream
	 */
    file_from_stream.close();
    return  (stuff_from_file);
}

// Ram& Ram::operator=(Ram const &rhs)
// {
//     *this = rhs;
//     return (*this);
// }

Ram::~Ram(void){}