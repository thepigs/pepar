#include "dev.h"
#include <string.h>
#include <sstream>

std::string dev_error::err(int err)
{
    char buf[255];
    char* r=strerror_r(errno,buf,sizeof(buf));
    if (NULL==r)
        return std::string(buf);
    return std::string(r);
}

dev::dev(const char* dev,int mode) throw (dev_error)
{
    _fd = open(dev, mode);
    if (_fd==-1)
        THROW(dev_error,errno);
}

void dev::dev_ioctl(int req, void* data) throw (dev_error)
{
	if(-1==ioctl(_fd,req,data))
		THROW(dev_error,errno);
}

dev::~dev()
{
	if (-1==close(_fd))
		WARN(dev_error::err(errno));
}
