#include "fe.h"
#include "log.h"
#include "soap.h"
#include <iostream>
int main(int argc, char* argv[])
{
	INFO("startup");	
    try {
        fe fe("/dev/dvb/adapter0/frontend0",O_RDONLY);
	_fe__dvb_frontend_info fei;
	fe.get_info(fei);
	gsoap soap(std::cout);
	soap<<fei;
    } catch (bt_error& e)
    {
        std::cout<<e.what()<<std::endl;
        std::cout<<e.trace()<<std::endl;
    }
}


