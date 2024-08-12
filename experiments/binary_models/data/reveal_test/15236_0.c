static OFCondition parseExtNeg ( SOPClassExtendedNegotiationSubItem * extNeg , unsigned char * buf , unsigned long * length , unsigned long availData ) {
 unsigned char * bufStart = buf ;
 if ( availData < 6 ) return makeLengthError ( "extended negotiation" , availData , 6 ) ;
 extNeg -> itemType = * buf ++ ;
 extNeg -> reserved1 = * buf ++ ;
 EXTRACT_SHORT_BIG ( buf , extNeg -> itemLength ) ;
 buf += 2 ;
 EXTRACT_SHORT_BIG ( buf , extNeg -> sopClassUIDLength ) ;
 buf += 2 ;
 if ( availData - 4 < extNeg -> itemLength ) return makeLengthError ( "extended negotiation" , availData , 0 , extNeg -> itemLength ) ;
 if ( extNeg -> itemLength < 2 ) return makeLengthError ( "extended negotiation item" , availData , 2 ) ;
 if ( extNeg -> itemLength - 2 < extNeg -> sopClassUIDLength ) return makeLengthError ( "extended negotiation item" , extNeg -> itemLength , 0 , extNeg -> sopClassUIDLength ) ;
 extNeg -> sopClassUID . append ( ( const char * ) buf , extNeg -> sopClassUIDLength ) ;
 buf += extNeg -> sopClassUIDLength ;
 * length = 2 + 2 + extNeg -> itemLength ;
 int remain = ( int ) ( * length - ( buf - bufStart ) ) ;
 extNeg -> serviceClassAppInfoLength = remain ;
 extNeg -> serviceClassAppInfo = new unsigned char [ remain ] ;
 for ( int i = 0 ;
 i < remain ;
 i ++ ) {
 extNeg -> serviceClassAppInfo [ i ] = * buf ++ ;
 }
 if ( DCM_dcmnetLogger . isEnabledFor ( OFLogger : : TRACE_LOG_LEVEL ) ) {
 DCMNET_TRACE ( "ExtNeg Subitem parse: Type " << STD_NAMESPACE hex << STD_NAMESPACE setfill ( '0' ) << STD_NAMESPACE setw ( 2 ) << OFstatic_cast ( unsigned int , extNeg -> itemType ) << STD_NAMESPACE dec << ", Length " << STD_NAMESPACE setw ( 4 ) << ( int ) extNeg -> itemLength << ", SOP Class: " << extNeg -> sopClassUID . c_str ( ) ) ;
 OFOStringStream str ;
 str << " values: " ;
 for ( int j = 0 ;
 j < extNeg -> serviceClassAppInfoLength ;
 j ++ ) {
 str << STD_NAMESPACE hex << STD_NAMESPACE setfill ( '0' ) << STD_NAMESPACE setw ( 2 ) << extNeg -> serviceClassAppInfo [ j ] << STD_NAMESPACE dec << " " ;
 }
 str << OFStringStream_ends ;
 OFSTRINGSTREAM_GETOFSTRING ( str , res ) DCMNET_TRACE ( res ) ;
 }
 return EC_Normal ;
 }