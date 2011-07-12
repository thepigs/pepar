#ifndef LOG_H
#define LOG_H

#include <string>

#define _LOG(LEVEL,s) if (logger::logger_level&logger::LEVEL) logger::logger_write(# LEVEL,__FILE__,__LINE__,s);

#define WARN(s) _LOG(WARN,s)
#define INFO(s) _LOG(INFO,s)
namespace logger
{
	extern enum _logger_level
	{ ERR=1,WARN=3,INFO=7,DEBUG=15} logger_level;

	void logger_write(const char* level, const char* file, int lineno, std::string msg);
}

#endif
