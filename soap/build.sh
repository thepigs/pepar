wsdl2h  fe_schema.xsd
soapcpp2 -i -S  -I /usr/share/gsoap/import fe_schema.h

function uscore
{
sed s/_USCORE/_/g < $1 > $1.tmp
mv $1.tmp $1
}


uscore soapH.h 
uscore soapStub.h 
uscore soapC.cpp 

mv fe.nsmap fe_nsmap.cpp
