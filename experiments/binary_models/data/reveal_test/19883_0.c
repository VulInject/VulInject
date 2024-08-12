static int name_parse ( u8 * packet , int length , int * idx , char * name_out , int name_out_len ) {
 int name_end = - 1 ;
 int j = * idx ;
 int ptr_count = 0 ;
 # define GET32 ( x ) do {
 if ( j + 4 > length ) goto err ;
 memcpy ( & _t32 , packet + j , 4 ) ;
 j += 4 ;
 x = ntohl ( _t32 ) ;
 }
 while ( 0 ) # define GET16 ( x ) do {
 if ( j + 2 > length ) goto err ;
 memcpy ( & _t , packet + j , 2 ) ;
 j += 2 ;
 x = ntohs ( _t ) ;
 }
 while ( 0 ) # define GET8 ( x ) do {
 if ( j >= length ) goto err ;
 x = packet [ j ++ ] ;
 }
 while ( 0 ) char * cp = name_out ;
 const char * const end = name_out + name_out_len ;
 for ( ;
 ;
 ) {
 u8 label_len ;
 if ( j >= length ) return - 1 ;
 GET8 ( label_len ) ;
 if ( ! label_len ) break ;
 if ( label_len & 0xc0 ) {
 u8 ptr_low ;
 GET8 ( ptr_low ) ;
 if ( name_end < 0 ) name_end = j ;
 j = ( ( ( int ) label_len & 0x3f ) << 8 ) + ptr_low ;
 if ( j < 0 || j >= length ) return - 1 ;
 if ( ++ ptr_count > length ) return - 1 ;
 continue ;
 }
 if ( label_len > 63 ) return - 1 ;
 if ( cp != name_out ) {
 if ( cp + 1 >= end ) return - 1 ;
 * cp ++ = '.' ;
 }
 if ( cp + label_len >= end ) return - 1 ;
 memcpy ( cp , packet + j , label_len ) ;
 cp += label_len ;
 j += label_len ;
 }
 if ( cp >= end ) return - 1 ;
 * cp = '\0' ;
 if ( name_end < 0 ) * idx = j ;
 else * idx = name_end ;
 return 0 ;
 err : return - 1 ;
 }