#include "dev.h"
#include <linux/dvb/frontend.h>
#include <ostream>
#include <soap/soapStub.h>
class fe : public dev
{
	public:
	void read_status(_fe__fe_status& status);
	void get_info(_fe__dvb_frontend_info& i);
	void set_frontend(_fe__dvb_frontend_parameters& i);
	void raw_read_status(fe_status_t& s) { dev_ioctl(FE_READ_STATUS,&s); }
	void raw_get_info(dvb_frontend_info& fe) { dev_ioctl(FE_GET_INFO, &fe); }
	void raw_set_frontend(dvb_frontend_parameters& fe) { dev_ioctl(FE_SET_FRONTEND, &fe); }
	 fe(const char* devname,int mode) : dev(devname,mode){}
};
