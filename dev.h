#ifndef DEV_H
#define DEV_H

#include <errno.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/ioctl.h>
#include <fcntl.h>
#include <string>
#include "bt.h"
#include "log.h"
#include <stdexcept>

class dev_error : public bt_error
{

public:
    static std::string err(int err);

    dev_error(const std::string& s,const char* file, int line) : bt_error(s,file,line) {}
    dev_error(const int en, const char* file, int line) : bt_error(err(en),file,line) {}
	
};

class dev
{
private:
    int _fd;
protected:
    void dev_ioctl(int request, void*) throw (dev_error);
    dev(const char* dev,int mode) throw (dev_error);
    virtual ~dev();
};

#endif
