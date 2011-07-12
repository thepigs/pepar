#include <ostream>
#include <stdsoap2.h>
#include <soapStub.h>
#include <typeinfo>
class gsoap
{
private:
	struct soap soap;
public:
	template<class T> friend gsoap& operator<<(gsoap& soap,T& t);

	gsoap(std::ostream& os) { soap_init(&soap); soap.os=&os; soap_set_omode(&soap, SOAP_XML_INDENT); }
	~gsoap() { soap_done(&soap); }	
};

template<class T> gsoap& operator<<(gsoap& soap,T& t)
	{
		t.soap=&soap.soap;
	        t.soap_serialize(&soap.soap);
	        soap_begin_send(&soap.soap);
	        t.soap_put(&soap.soap,typeid(T).name(),NULL);
	        soap_end_send(&soap.soap);
		return soap;
	}

