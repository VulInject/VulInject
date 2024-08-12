static time_t _warc_rdrtm ( const char * buf , size_t bsz ) {
 static const char _key [ ] = "\r\nWARC-Date:" ;
 const char * val , * eol ;
 char * on = NULL ;
 time_t res ;
 if ( ( val = xmemmem ( buf , bsz , _key , sizeof ( _key ) - 1U ) ) == NULL ) {
 return ( time_t ) - 1 ;
 }
 val += sizeof ( _key ) - 1U ;
 if ( ( eol = _warc_find_eol ( val , buf + bsz - val ) ) == NULL ) {
 return - 1 ;
 }
 res = xstrpisotime ( val , & on ) ;
 if ( on != eol ) {
 return - 1 ;
 }
 return res ;
 }