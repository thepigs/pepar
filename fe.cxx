#include "fe.h"
#include <stdlib.h>
#include <sstream>

using namespace std;

template<class T> inline string tostring(T t)
{
	ostringstream os;
	os << t;
	return os.str();
}


#define ROWUI(N) fdfi.N=tostring(dfi.N);
#define CAP(N) if (dfi.caps & N) fdfi.caps = (fe__fe_caps_t)(fdfi.caps|fe__fe_caps_t__##N);
void  fe::get_info(struct  _fe__dvb_frontend_info& fdfi)
{
    struct dvb_frontend_info dfi;
    raw_get_info(dfi);
    fdfi.name=dfi.name;	
    fdfi.type=(fe__fe_type_t)dfi.type;
    ROWUI(frequency_min);
    ROWUI(frequency_max);
    ROWUI(frequency_stepsize);
    ROWUI(frequency_tolerance);
    ROWUI(symbol_rate_min);
    ROWUI(symbol_rate_max);
    ROWUI(symbol_rate_tolerance);
    ROWUI(notifier_delay);
    CAP(FE_IS_STUPID)
    CAP( FE_CAN_INVERSION_AUTO )
         CAP( FE_CAN_FEC_1_2 )
         CAP( FE_CAN_FEC_2_3 )
         CAP( FE_CAN_FEC_3_4 )
         CAP( FE_CAN_FEC_4_5 )
         CAP( FE_CAN_FEC_5_6 )
         CAP( FE_CAN_FEC_6_7 )
         CAP( FE_CAN_FEC_7_8 )
         CAP( FE_CAN_FEC_8_9 )
         CAP( FE_CAN_FEC_AUTO)
         CAP( FE_CAN_QPSK  )
         CAP( FE_CAN_QAM_16 )
         CAP( FE_CAN_QAM_32 )
         CAP( FE_CAN_QAM_64 )
         CAP( FE_CAN_QAM_128 )
         CAP( FE_CAN_QAM_256  )
         CAP( FE_CAN_QAM_AUTO)
         CAP( FE_CAN_TRANSMISSION_MODE_AUTO)
         CAP( FE_CAN_BANDWIDTH_AUTO      )
         CAP( FE_CAN_GUARD_INTERVAL_AUTO)
         CAP( FE_CAN_HIERARCHY_AUTO )
         CAP( FE_CAN_MUTE_TS      )
//         CAP( FE_CAN_CLEAN_SETUP )
     }

#define STATUS(N) if (s & N) fes.status = (fe__fe_status_t)(fes.status|fe__fe_status_t__##N);

void fe::read_status(_fe__fe_status& fes)
{
	fe_status_t s;
	raw_read_status(s);
	STATUS(FE_HAS_SIGNAL)
	STATUS(FE_HAS_CARRIER)
	STATUS(FE_HAS_VITERBI)
	STATUS(FE_HAS_SYNC)
	STATUS(FE_HAS_LOCK)
	STATUS(FE_TIMEDOUT)
	STATUS(FE_REINIT)	
}
 
/*    void fe::set_frontend(_fe__dvb_frontend_parameters& i);
{

}*/

