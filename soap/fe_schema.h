/* fe_schema.h
   Generated by wsdl2h 1.2.17 from fe_schema.xsd and typemap.dat
   2011-07-10 23:46:54 GMT

   DO NOT INCLUDE THIS FILE DIRECTLY INTO YOUR PROJECT BUILDS
   USE THE soapcpp2-GENERATED SOURCE CODE FILES FOR YOUR PROJECT BUILDS

   gSOAP XML Web services tools.
   Copyright (C) 2001-2010 Robert van Engelen, Genivia Inc. All Rights Reserved.
   Part of this software is released under one of the following licenses:
   GPL or Genivia's license for commercial use.
*/

/** @page page_notes Usage Notes

NOTE:

 - Run soapcpp2 on fe_schema.h to generate the SOAP/XML processing logic.
   Use soapcpp2 option -I to specify paths for #import
   To build with STL, 'stlvector.h' is imported from 'import' dir in package.
   Use soapcpp2 option -i to generate improved proxy and server classes.
 - Use wsdl2h options -c and -s to generate pure C code or C++ code without STL.
 - Use 'typemap.dat' to control namespace bindings and type mappings.
   It is strongly recommended to customize the names of the namespace prefixes
   generated by wsdl2h. To do so, modify the prefix bindings in the Namespaces
   section below and add the modified lines to 'typemap.dat' to rerun wsdl2h.
 - Use Doxygen (www.doxygen.org) on this file to generate documentation.
 - Use wsdl2h options -nname and -Nname to globally rename the prefix 'ns'.
 - Use wsdl2h option -d to enable DOM support for xsd:anyType.
 - Use wsdl2h option -g to auto-generate readers and writers for root elements.
 - Struct/class members serialized as XML attributes are annotated with a '@'.
 - Struct/class members that have a special role are annotated with a '$'.

WARNING:

   DO NOT INCLUDE THIS FILE DIRECTLY INTO YOUR PROJECT BUILDS.
   USE THE SOURCE CODE FILES GENERATED BY soapcpp2 FOR YOUR PROJECT BUILDS:
   THE soapStub.h FILE CONTAINS THIS CONTENT WITHOUT ANNOTATIONS.

LICENSE:

@verbatim
--------------------------------------------------------------------------------
gSOAP XML Web services tools
Copyright (C) 2000-2010, Robert van Engelen, Genivia Inc. All Rights Reserved.

This software is released under one of the following two licenses:
1) GPL or 2) Genivia's license for commercial use.
--------------------------------------------------------------------------------
1) GPL license.

This program is free software; you can redistribute it and/or modify it under
the terms of the GNU General Public License as published by the Free Software
Foundation; either version 2 of the License, or (at your option) any later
version.

This program is distributed in the hope that it will be useful, but WITHOUT ANY
WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
PARTICULAR PURPOSE. See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License along with
this program; if not, write to the Free Software Foundation, Inc., 59 Temple
Place, Suite 330, Boston, MA 02111-1307 USA

Author contact information:
engelen@genivia.com / engelen@acm.org
--------------------------------------------------------------------------------
2) A commercial-use license is available from Genivia, Inc., contact@genivia.com
--------------------------------------------------------------------------------
@endverbatim

*/


//gsoapopt w

/******************************************************************************\
 *                                                                            *
 * Definitions                                                                *
 *   urn:pepar:fe                                                             *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Import                                                                     *
 *                                                                            *
\******************************************************************************/


// STL vector containers (use option -s to remove STL dependency)
#import "stlvector.h"

/******************************************************************************\
 *                                                                            *
 * Schema Namespaces                                                          *
 *                                                                            *
\******************************************************************************/


/* NOTE:

It is strongly recommended to customize the names of the namespace prefixes
generated by wsdl2h. To do so, modify the prefix bindings below and add the
modified lines to typemap.dat to rerun wsdl2h:

fe = "urn:pepar:fe"

*/

#define SOAP_NAMESPACE_OF_fe	"urn:pepar:fe"
//gsoap fe    schema namespace:	urn:pepar:fe
//gsoap fe    schema form:	unqualified

/******************************************************************************\
 *                                                                            *
 * Built-in Schema Types and Top-Level Elements and Attributes                *
 *                                                                            *
\******************************************************************************/


/// Primitive built-in type "xs:unsignedInteger"
typedef std::string xsd__unsignedInteger;

/******************************************************************************\
 *                                                                            *
 * Forward Declarations                                                       *
 *                                                                            *
\******************************************************************************/



//  Forward declaration of class fe__dvb_USCOREofdm_USCOREparameters_USCOREt.
class fe__dvb_USCOREofdm_USCOREparameters_USCOREt;

//  Forward declaration of class _fe__fe_USCOREstatus.
class _fe__fe_USCOREstatus;

//  Forward declaration of class _fe__dvb_USCOREfrontend_USCOREinfo.
class _fe__dvb_USCOREfrontend_USCOREinfo;

//  Forward declaration of class _fe__dvb_USCOREfrontend_USCOREparameters.
class _fe__dvb_USCOREfrontend_USCOREparameters;

/******************************************************************************\
 *                                                                            *
 * Schema Types and Top-Level Elements and Attributes                         *
 *   urn:pepar:fe                                                             *
 *                                                                            *
\******************************************************************************/


/// "urn:pepar:fe":fe_status_t is a simpleType list.
/// Note: this enumeration is a bitmask, so a set of values is supported (using | and & bit-ops on the bit vector).
/// Note: enum values are prefixed with 'fe__fe_USCOREstatus_USCOREt' to avoid name clashes, please use wsdl2h option -e to omit this prefix
enum * fe__fe_USCOREstatus_USCOREt
{
	fe__fe_USCOREstatus_USCOREt__FE_USCOREHAS_USCORESIGNAL,	///< xs:string value="FE_HAS_SIGNAL"
	fe__fe_USCOREstatus_USCOREt__FE_USCOREHAS_USCORECARRIER,	///< xs:string value="FE_HAS_CARRIER"
	fe__fe_USCOREstatus_USCOREt__FE_USCOREHAS_USCOREVITERBI,	///< xs:string value="FE_HAS_VITERBI"
	fe__fe_USCOREstatus_USCOREt__FE_USCOREHAS_USCORESYNC,	///< xs:string value="FE_HAS_SYNC"
	fe__fe_USCOREstatus_USCOREt__FE_USCOREHAS_USCORELOCK,	///< xs:string value="FE_HAS_LOCK"
	fe__fe_USCOREstatus_USCOREt__FE_USCORETIMEDOUT,	///< xs:string value="FE_TIMEDOUT"
	fe__fe_USCOREstatus_USCOREt__FE_USCOREREINIT,	///< xs:string value="FE_REINIT"
};

/// "urn:pepar:fe":fe_caps_t is a simpleType list.
/// Note: this enumeration is a bitmask, so a set of values is supported (using | and & bit-ops on the bit vector).
/// Note: enum values are prefixed with 'fe__fe_USCOREcaps_USCOREt' to avoid name clashes, please use wsdl2h option -e to omit this prefix
enum * fe__fe_USCOREcaps_USCOREt
{
	fe__fe_USCOREcaps_USCOREt__FE_USCOREIS_USCORESTUPID,	///< xs:string value="FE_IS_STUPID"
	fe__fe_USCOREcaps_USCOREt__FE_USCORECAN_USCOREINVERSION_USCOREAUTO,	///< xs:string value="FE_CAN_INVERSION_AUTO"
	fe__fe_USCOREcaps_USCOREt__FE_USCORECAN_USCOREFEC_USCORE1_USCORE2,	///< xs:string value="FE_CAN_FEC_1_2"
	fe__fe_USCOREcaps_USCOREt__FE_USCORECAN_USCOREFEC_USCORE2_USCORE3,	///< xs:string value="FE_CAN_FEC_2_3"
	fe__fe_USCOREcaps_USCOREt__FE_USCORECAN_USCOREFEC_USCORE3_USCORE4,	///< xs:string value="FE_CAN_FEC_3_4"
	fe__fe_USCOREcaps_USCOREt__FE_USCORECAN_USCOREFEC_USCORE4_USCORE5,	///< xs:string value="FE_CAN_FEC_4_5"
	fe__fe_USCOREcaps_USCOREt__FE_USCORECAN_USCOREFEC_USCORE5_USCORE6,	///< xs:string value="FE_CAN_FEC_5_6"
	fe__fe_USCOREcaps_USCOREt__FE_USCORECAN_USCOREFEC_USCORE6_USCORE7,	///< xs:string value="FE_CAN_FEC_6_7"
	fe__fe_USCOREcaps_USCOREt__FE_USCORECAN_USCOREFEC_USCORE7_USCORE8,	///< xs:string value="FE_CAN_FEC_7_8"
	fe__fe_USCOREcaps_USCOREt__FE_USCORECAN_USCOREFEC_USCORE8_USCORE9,	///< xs:string value="FE_CAN_FEC_8_9"
	fe__fe_USCOREcaps_USCOREt__FE_USCORECAN_USCOREFEC_USCOREAUTO,	///< xs:string value="FE_CAN_FEC_AUTO"
	fe__fe_USCOREcaps_USCOREt__FE_USCORECAN_USCOREQPSK,	///< xs:string value="FE_CAN_QPSK"
	fe__fe_USCOREcaps_USCOREt__FE_USCORECAN_USCOREQAM_USCORE16,	///< xs:string value="FE_CAN_QAM_16"
	fe__fe_USCOREcaps_USCOREt__FE_USCORECAN_USCOREQAM_USCORE32,	///< xs:string value="FE_CAN_QAM_32"
	fe__fe_USCOREcaps_USCOREt__FE_USCORECAN_USCOREQAM_USCORE64,	///< xs:string value="FE_CAN_QAM_64"
	fe__fe_USCOREcaps_USCOREt__FE_USCORECAN_USCOREQAM_USCORE128,	///< xs:string value="FE_CAN_QAM_128"
	fe__fe_USCOREcaps_USCOREt__FE_USCORECAN_USCOREQAM_USCORE256,	///< xs:string value="FE_CAN_QAM_256"
	fe__fe_USCOREcaps_USCOREt__FE_USCORECAN_USCOREQAM_USCOREAUTO,	///< xs:string value="FE_CAN_QAM_AUTO"
	fe__fe_USCOREcaps_USCOREt__FE_USCORECAN_USCORETRANSMISSION_USCOREMODE_USCOREAUTO,	///< xs:string value="FE_CAN_TRANSMISSION_MODE_AUTO"
	fe__fe_USCOREcaps_USCOREt__FE_USCORECAN_USCOREBANDWIDTH_USCOREAUTO,	///< xs:string value="FE_CAN_BANDWIDTH_AUTO"
	fe__fe_USCOREcaps_USCOREt__FE_USCORECAN_USCOREGUARD_USCOREINTERVAL_USCOREAUTO,	///< xs:string value="FE_CAN_GUARD_INTERVAL_AUTO"
	fe__fe_USCOREcaps_USCOREt__FE_USCORECAN_USCOREHIERARCHY_USCOREAUTO,	///< xs:string value="FE_CAN_HIERARCHY_AUTO"
	fe__fe_USCOREcaps_USCOREt__FE_USCORECAN_USCORE8VSB,	///< xs:string value="FE_CAN_8VSB"
	fe__fe_USCOREcaps_USCOREt__FE_USCORECAN_USCORE16VSB,	///< xs:string value="FE_CAN_16VSB"
	fe__fe_USCOREcaps_USCOREt__FE_USCOREHAS_USCOREEXTENDED_USCORECAPS,	///< xs:string value="FE_HAS_EXTENDED_CAPS"
	fe__fe_USCOREcaps_USCOREt__FE_USCORECAN_USCORE2G_USCOREMODULATION,	///< xs:string value="FE_CAN_2G_MODULATION"
	fe__fe_USCOREcaps_USCOREt__FE_USCORENEEDS_USCOREBENDING,	///< xs:string value="FE_NEEDS_BENDING"
	fe__fe_USCOREcaps_USCOREt__FE_USCORECAN_USCORERECOVER,	///< xs:string value="FE_CAN_RECOVER"
	fe__fe_USCOREcaps_USCOREt__FE_USCORECAN_USCOREMUTE_USCORETS,	///< xs:string value="FE_CAN_MUTE_TS"
};

/// "urn:pepar:fe":fe_type_t is a simpleType restriction of xs:string.
/// Note: enum values are prefixed with 'fe__fe_USCOREtype_USCOREt' to avoid name clashes, please use wsdl2h option -e to omit this prefix
enum fe__fe_USCOREtype_USCOREt
{
	fe__fe_USCOREtype_USCOREt__FE_USCOREQPSK,	///< xs:string value="FE_QPSK"
	fe__fe_USCOREtype_USCOREt__FE_USCOREQAM,	///< xs:string value="FE_QAM"
	fe__fe_USCOREtype_USCOREt__FE_USCOREOFDM,	///< xs:string value="FE_OFDM"
	fe__fe_USCOREtype_USCOREt__FE_USCOREATSC,	///< xs:string value="FE_ATSC"
};

/// "urn:pepar:fe":fe_spectral_inversion_t is a simpleType restriction of xs:string.
/// Note: enum values are prefixed with 'fe__fe_USCOREspectral_USCOREinversion_USCOREt' to avoid name clashes, please use wsdl2h option -e to omit this prefix
enum fe__fe_USCOREspectral_USCOREinversion_USCOREt
{
	fe__fe_USCOREspectral_USCOREinversion_USCOREt__INVERSION_USCOREOFF,	///< xs:string value="INVERSION_OFF"
	fe__fe_USCOREspectral_USCOREinversion_USCOREt__INVERSION_USCOREON,	///< xs:string value="INVERSION_ON"
	fe__fe_USCOREspectral_USCOREinversion_USCOREt__INVERSION_USCOREAUTO,	///< xs:string value="INVERSION_AUTO"
};

/// "urn:pepar:fe":fe_code_rate_t is a simpleType restriction of xs:string.
/// Note: enum values are prefixed with 'fe__fe_USCOREcode_USCORErate_USCOREt' to avoid name clashes, please use wsdl2h option -e to omit this prefix
enum fe__fe_USCOREcode_USCORErate_USCOREt
{
	fe__fe_USCOREcode_USCORErate_USCOREt__FEC_USCORENONE,	///< xs:string value="FEC_NONE"
	fe__fe_USCOREcode_USCORErate_USCOREt__FEC_USCORE1_USCORE2,	///< xs:string value="FEC_1_2"
	fe__fe_USCOREcode_USCORErate_USCOREt__FEC_USCORE2_USCORE3,	///< xs:string value="FEC_2_3"
	fe__fe_USCOREcode_USCORErate_USCOREt__FEC_USCORE3_USCORE4,	///< xs:string value="FEC_3_4"
	fe__fe_USCOREcode_USCORErate_USCOREt__FEC_USCORE4_USCORE5,	///< xs:string value="FEC_4_5"
	fe__fe_USCOREcode_USCORErate_USCOREt__FEC_USCORE5_USCORE6,	///< xs:string value="FEC_5_6"
	fe__fe_USCOREcode_USCORErate_USCOREt__FEC_USCORE6_USCORE7,	///< xs:string value="FEC_6_7"
	fe__fe_USCOREcode_USCORErate_USCOREt__FEC_USCORE8_USCORE9,	///< xs:string value="FEC_8_9"
	fe__fe_USCOREcode_USCORErate_USCOREt__FEC_USCORE3_USCORE5,	///< xs:string value="FEC_3_5"
	fe__fe_USCOREcode_USCORErate_USCOREt__FEC_USCORE9_USCORE10,	///< xs:string value="FEC_9_10"
};

/// "urn:pepar:fe":fe_modulation_t is a simpleType restriction of xs:string.
/// Note: enum values are prefixed with 'fe__fe_USCOREmodulation_USCOREt' to avoid name clashes, please use wsdl2h option -e to omit this prefix
enum fe__fe_USCOREmodulation_USCOREt
{
	fe__fe_USCOREmodulation_USCOREt__QPSK,	///< xs:string value="QPSK"
	fe__fe_USCOREmodulation_USCOREt__QAM_USCORE16,	///< xs:string value="QAM_16"
	fe__fe_USCOREmodulation_USCOREt__QAM_USCORE32,	///< xs:string value="QAM_32"
	fe__fe_USCOREmodulation_USCOREt__QAM_USCORE64,	///< xs:string value="QAM_64"
	fe__fe_USCOREmodulation_USCOREt__QAM_USCORE128,	///< xs:string value="QAM_128"
	fe__fe_USCOREmodulation_USCOREt__QAM_USCORE256,	///< xs:string value="QAM_256"
	fe__fe_USCOREmodulation_USCOREt__QAM_USCOREAUTO,	///< xs:string value="QAM_AUTO"
	fe__fe_USCOREmodulation_USCOREt__VSB_USCORE8,	///< xs:string value="VSB_8"
	fe__fe_USCOREmodulation_USCOREt__VSB_USCORE16,	///< xs:string value="VSB_16"
	fe__fe_USCOREmodulation_USCOREt__PSK_USCORE8,	///< xs:string value="PSK_8"
	fe__fe_USCOREmodulation_USCOREt__APSK_USCORE16,	///< xs:string value="APSK_16"
	fe__fe_USCOREmodulation_USCOREt__APSK_USCORE32,	///< xs:string value="APSK_32"
	fe__fe_USCOREmodulation_USCOREt__DQPSK,	///< xs:string value="DQPSK"
};

/// "urn:pepar:fe":fe_transmit_mode_t is a simpleType restriction of xs:string.
/// Note: enum values are prefixed with 'fe__fe_USCOREtransmit_USCOREmode_USCOREt' to avoid name clashes, please use wsdl2h option -e to omit this prefix
enum fe__fe_USCOREtransmit_USCOREmode_USCOREt
{
	fe__fe_USCOREtransmit_USCOREmode_USCOREt__TRANSMISSION_USCOREMODE_USCORE2K,	///< xs:string value="TRANSMISSION_MODE_2K"
	fe__fe_USCOREtransmit_USCOREmode_USCOREt__TRANSMISSION_USCOREMODE_USCORE8K,	///< xs:string value="TRANSMISSION_MODE_8K"
	fe__fe_USCOREtransmit_USCOREmode_USCOREt__TRANSMISSION_USCOREMODE_USCOREAUTO,	///< xs:string value="TRANSMISSION_MODE_AUTO"
	fe__fe_USCOREtransmit_USCOREmode_USCOREt__TRANSMISSION_USCOREMODE_USCORE4K,	///< xs:string value="TRANSMISSION_MODE_4K"
};

/// "urn:pepar:fe":fe_bandwidth_t is a simpleType restriction of xs:string.
/// Note: enum values are prefixed with 'fe__fe_USCOREbandwidth_USCOREt' to avoid name clashes, please use wsdl2h option -e to omit this prefix
enum fe__fe_USCOREbandwidth_USCOREt
{
	fe__fe_USCOREbandwidth_USCOREt__BANDWIDTH_USCORE8_USCOREMHZ,	///< xs:string value="BANDWIDTH_8_MHZ"
	fe__fe_USCOREbandwidth_USCOREt__BANDWIDTH_USCORE7_USCOREMHZ,	///< xs:string value="BANDWIDTH_7_MHZ"
	fe__fe_USCOREbandwidth_USCOREt__BANDWIDTH_USCORE6_USCOREMHZ,	///< xs:string value="BANDWIDTH_6_MHZ"
	fe__fe_USCOREbandwidth_USCOREt__BANDWIDTH_USCOREAUTO,	///< xs:string value="BANDWIDTH_AUTO"
};

/// "urn:pepar:fe":fe_guard_interval_t is a simpleType restriction of xs:string.
/// Note: enum values are prefixed with 'fe__fe_USCOREguard_USCOREinterval_USCOREt' to avoid name clashes, please use wsdl2h option -e to omit this prefix
enum fe__fe_USCOREguard_USCOREinterval_USCOREt
{
	fe__fe_USCOREguard_USCOREinterval_USCOREt__GUARD_USCOREINTERVAL_USCORE1_USCORE32,	///< xs:string value="GUARD_INTERVAL_1_32"
	fe__fe_USCOREguard_USCOREinterval_USCOREt__GUARD_USCOREINTERVAL_USCORE1_USCORE16,	///< xs:string value="GUARD_INTERVAL_1_16"
	fe__fe_USCOREguard_USCOREinterval_USCOREt__GUARD_USCOREINTERVAL_USCORE1_USCORE8,	///< xs:string value="GUARD_INTERVAL_1_8"
	fe__fe_USCOREguard_USCOREinterval_USCOREt__GUARD_USCOREINTERVAL_USCORE1_USCORE4,	///< xs:string value="GUARD_INTERVAL_1_4"
	fe__fe_USCOREguard_USCOREinterval_USCOREt__GUARD_USCOREINTERVAL_USCOREAUTO,	///< xs:string value="GUARD_INTERVAL_AUTO"
};

/// "urn:pepar:fe":fe_hierarchy_t is a simpleType restriction of xs:string.
/// Note: enum values are prefixed with 'fe__fe_USCOREhierarchy_USCOREt' to avoid name clashes, please use wsdl2h option -e to omit this prefix
enum fe__fe_USCOREhierarchy_USCOREt
{
	fe__fe_USCOREhierarchy_USCOREt__HIERARCHY_USCORENONE,	///< xs:string value="HIERARCHY_NONE"
	fe__fe_USCOREhierarchy_USCOREt__HIERARCHY_USCORE1,	///< xs:string value="HIERARCHY_1"
	fe__fe_USCOREhierarchy_USCOREt__HIERARCHY_USCORE2,	///< xs:string value="HIERARCHY_2"
	fe__fe_USCOREhierarchy_USCOREt__HIERARCHY_USCORE4,	///< xs:string value="HIERARCHY_4"
	fe__fe_USCOREhierarchy_USCOREt__HIERARCHY_USCOREAUTO,	///< xs:string value="HIERARCHY_AUTO"
};

/******************************************************************************\
 *                                                                            *
 * Schema Complex Types and Top-Level Elements                                *
 *   urn:pepar:fe                                                             *
 *                                                                            *
\******************************************************************************/


/// "urn:pepar:fe":dvb_ofdm_parameters_t is a complexType.
class fe__dvb_USCOREofdm_USCOREparameters_USCOREt
{ public:
/// Element bandwidth of type "urn:pepar:fe":fe_bandwidth_t.
    enum fe__fe_USCOREbandwidth_USCOREt  bandwidth                      1;	///< Required element.
/// Element code_rate_HP of type "urn:pepar:fe":fe_code_rate_t.
    enum fe__fe_USCOREcode_USCORErate_USCOREt  code_USCORErate_USCOREHP       1;	///< Required element.
/// Element code_rate_LP of type "urn:pepar:fe":fe_code_rate_t.
    enum fe__fe_USCOREcode_USCORErate_USCOREt  code_USCORErate_USCORELP       1;	///< Required element.
/// Element constellation of type "urn:pepar:fe":fe_modulation_t.
    enum fe__fe_USCOREmodulation_USCOREt  constellation                  1;	///< Required element.
/// Element transmission_mode of type "urn:pepar:fe":fe_transmit_mode_t.
    enum fe__fe_USCOREtransmit_USCOREmode_USCOREt  transmission_USCOREmode        1;	///< Required element.
/// Element guard_interval of type "urn:pepar:fe":fe_guard_interval_t.
    enum fe__fe_USCOREguard_USCOREinterval_USCOREt  guard_USCOREinterval           1;	///< Required element.
/// Element hierarchy_information of type "urn:pepar:fe":fe_hierarchy_t.
    enum fe__fe_USCOREhierarchy_USCOREt  hierarchy_USCOREinformation    1;	///< Required element.
/// A handle to the soap struct that manages this instance (automatically set)
    struct soap                         *soap                          ;
};


/// Top-level root element "urn:pepar:fe":fe_status

/// "urn:pepar:fe":fe_status is a complexType.
class _fe__fe_USCOREstatus
{ public:
/// Element status of type "urn:pepar:fe":fe_status_t.
    enum fe__fe_USCOREstatus_USCOREt     status                         1;	///< Required element.
/// A handle to the soap struct that manages this instance (automatically set)
    struct soap                         *soap                          ;
};


/// Top-level root element "urn:pepar:fe":dvb_frontend_info

/// "urn:pepar:fe":dvb_frontend_info is a complexType.
class _fe__dvb_USCOREfrontend_USCOREinfo
{ public:
/// Element name of type xs:string.
    std::string                          name                           1;	///< Required element.
/// Element type of type "urn:pepar:fe":fe_type_t.
    enum fe__fe_USCOREtype_USCOREt       type                           1;	///< Required element.
/// Element frequency_min of type xs:unsignedInteger.
    xsd__unsignedInteger                 frequency_USCOREmin            1;	///< Required element.
/// Element frequency_max of type xs:unsignedInteger.
    xsd__unsignedInteger                 frequency_USCOREmax            1;	///< Required element.
/// Element frequency_stepsize of type xs:unsignedInteger.
    xsd__unsignedInteger                 frequency_USCOREstepsize       1;	///< Required element.
/// Element frequency_tolerance of type xs:unsignedInteger.
    xsd__unsignedInteger                 frequency_USCOREtolerance      1;	///< Required element.
/// Element symbol_rate_min of type xs:unsignedInteger.
    xsd__unsignedInteger                 symbol_USCORErate_USCOREmin    1;	///< Required element.
/// Element symbol_rate_max of type xs:unsignedInteger.
    xsd__unsignedInteger                 symbol_USCORErate_USCOREmax    1;	///< Required element.
/// Element symbol_rate_tolerance of type xs:unsignedInteger.
    xsd__unsignedInteger                 symbol_USCORErate_USCOREtolerance 1;	///< Required element.
/// Element notifier_delay of type xs:unsignedInteger.
    xsd__unsignedInteger                 notifier_USCOREdelay           1;	///< Required element.
/// Element caps of type "urn:pepar:fe":fe_caps_t.
    enum fe__fe_USCOREcaps_USCOREt       caps                           1;	///< Required element.
/// A handle to the soap struct that manages this instance (automatically set)
    struct soap                         *soap                          ;
};


/// Top-level root element "urn:pepar:fe":dvb_frontend_parameters

/// "urn:pepar:fe":dvb_frontend_parameters is a complexType.
class _fe__dvb_USCOREfrontend_USCOREparameters
{ public:
/// Element frequency of type xs:unsignedInteger.
    xsd__unsignedInteger                 frequency                      1;	///< Required element.
/// Element inversion of type "urn:pepar:fe":fe_spectral_inversion_t.
    enum fe__fe_USCOREspectral_USCOREinversion_USCOREt  inversion                      1;	///< Required element.
/// CHOICE OF ELEMENTS <xs:choice>
   $int                                  __union_dvb_USCOREfrontend_USCOREparameters;	///< Union _fe__union_dvb_USCOREfrontend_USCOREparameters selector: set to SOAP_UNION__fe__union_dvb_USCOREfrontend_USCOREparameters_<fieldname>
    union _fe__union_dvb_USCOREfrontend_USCOREparameters
    {
/// Element ofdm of type "urn:pepar:fe":dvb_ofdm_parameters_t.
    fe__dvb_USCOREofdm_USCOREparameters_USCOREt*  ofdm                           1;	///< Required element.
    }                                    union_dvb_USCOREfrontend_USCOREparameters;
//  END OF CHOICE
/// A handle to the soap struct that manages this instance (automatically set)
    struct soap                         *soap                          ;
};

/******************************************************************************\
 *                                                                            *
 * Additional Top-Level Elements                                              *
 *   urn:pepar:fe                                                             *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Additional Top-Level Attributes                                            *
 *   urn:pepar:fe                                                             *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * XML Data Binding                                                           *
 *                                                                            *
\******************************************************************************/


/**

@page page_XMLDataBinding XML Data Binding

SOAP/XML services use data bindings contractually bound by WSDL and auto-
generated by wsdl2h and soapcpp2 (see Service Bindings). Plain data bindings
are adopted from XML schemas as part of the WSDL types section or when running
wsdl2h on a set of schemas to produce non-SOAP-based XML data bindings.

The following readers and writers are C/C++ data type (de)serializers auto-
generated by wsdl2h and soapcpp2. Run soapcpp2 on this file to generate the
(de)serialization code, which is stored in soapC.c[pp]. Include "soapH.h" in
your code to import these data type and function declarations. Only use the
soapcpp2-generated files in your project build. Do not include the wsdl2h-
generated .h file in your code.

XML content can be retrieved from:
  - a file descriptor, using soap->recvfd = fd
  - a socket, using soap->socket = ...
  - a C++ stream, using soap->is = ...
  - a buffer, using the soap->frecv() callback

XML content can be stored to:
  - a file descriptor, using soap->sendfd = fd
  - a socket, using soap->socket = ...
  - a C++ stream, using soap->os = ...
  - a buffer, using the soap->fsend() callback


@section fe Top-level root elements of schema "urn:pepar:fe"

  - <fe:fe_status> @ref _fe__fe_USCOREstatus
    @code
    // Reader (returns SOAP_OK on success):
    soap_read__fe__fe_USCOREstatus(struct soap*, _fe__fe_USCOREstatus*);
    // Writer (returns SOAP_OK on success):
    soap_write__fe__fe_USCOREstatus(struct soap*, _fe__fe_USCOREstatus*);
    @endcode

  - <fe:dvb_frontend_info> @ref _fe__dvb_USCOREfrontend_USCOREinfo
    @code
    // Reader (returns SOAP_OK on success):
    soap_read__fe__dvb_USCOREfrontend_USCOREinfo(struct soap*, _fe__dvb_USCOREfrontend_USCOREinfo*);
    // Writer (returns SOAP_OK on success):
    soap_write__fe__dvb_USCOREfrontend_USCOREinfo(struct soap*, _fe__dvb_USCOREfrontend_USCOREinfo*);
    @endcode

  - <fe:dvb_frontend_parameters> @ref _fe__dvb_USCOREfrontend_USCOREparameters
    @code
    // Reader (returns SOAP_OK on success):
    soap_read__fe__dvb_USCOREfrontend_USCOREparameters(struct soap*, _fe__dvb_USCOREfrontend_USCOREparameters*);
    // Writer (returns SOAP_OK on success):
    soap_write__fe__dvb_USCOREfrontend_USCOREparameters(struct soap*, _fe__dvb_USCOREfrontend_USCOREparameters*);
    @endcode

*/

/* End of fe_schema.h */
