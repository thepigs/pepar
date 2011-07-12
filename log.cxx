#include "log.h"
#include <iostream>
#include <string>

using namespace logger;

_logger_level logger::logger_level =DEBUG;

void logger::logger_write(const char* level, const char* file, int lineno, std::string msg)
{
	std::cout << logger_level << ": " << file << ":" <<lineno << " " << msg << std::endl;
}


