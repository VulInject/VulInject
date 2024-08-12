void IGDendelt ( void * d , const char * name , int l ) {
 struct IGDdatas * datas = ( struct IGDdatas * ) d ;
 datas -> level -- ;
 if ( ( l == 7 ) && ! memcmp ( name , "service" , l ) ) {
 if ( COMPARE ( datas -> tmp . servicetype , "urn:schemas-upnp-org:service:WANCommonInterfaceConfig:" ) ) {
 memcpy ( & datas -> CIF , & datas -> tmp , sizeof ( struct IGDdatas_service ) ) ;
 }
 else if ( COMPARE ( datas -> tmp . servicetype , "urn:schemas-upnp-org:service:WANIPv6FirewallControl:" ) ) {
 memcpy ( & datas -> IPv6FC , & datas -> tmp , sizeof ( struct IGDdatas_service ) ) ;
 }
 else if ( COMPARE ( datas -> tmp . servicetype , "urn:schemas-upnp-org:service:WANIPConnection:" ) || COMPARE ( datas -> tmp . servicetype , "urn:schemas-upnp-org:service:WANPPPConnection:" ) ) {
 if ( datas -> first . servicetype [ 0 ] == '\0' ) {
 memcpy ( & datas -> first , & datas -> tmp , sizeof ( struct IGDdatas_service ) ) ;
 }
 else {
 memcpy ( & datas -> second , & datas -> tmp , sizeof ( struct IGDdatas_service ) ) ;
 }
 }
 }
 }