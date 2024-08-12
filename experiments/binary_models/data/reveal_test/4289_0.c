static int lookup_uname_helper ( struct cpio * cpio , const char * * name , id_t id ) {
 struct passwd * pwent ;
 ( void ) cpio ;
 errno = 0 ;
 pwent = getpwuid ( ( uid_t ) id ) ;
 if ( pwent == NULL ) {
 * name = NULL ;
 if ( errno != 0 && errno != ENOENT ) lafe_warnc ( errno , "getpwuid(%s) failed" , cpio_i64toa ( ( int64_t ) id ) ) ;
 return ( errno ) ;
 }
 * name = pwent -> pw_name ;
 return ( 0 ) ;
 }