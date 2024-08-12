static struct mspack_file * mspack_fmap_open ( struct mspack_system * self , const char * filename , int mode ) {
 struct mspack_name * mspack_name ;
 struct mspack_handle * mspack_handle ;
 struct mspack_system_ex * self_ex ;
 const char * fmode ;
 const struct mspack_system * mptr = self ;
 if ( ! filename ) {
 cli_dbgmsg ( "%s() failed at %d\n" , __func__ , __LINE__ ) ;
 return NULL ;
 }
 mspack_handle = malloc ( sizeof ( * mspack_handle ) ) ;
 if ( ! mspack_handle ) {
 cli_dbgmsg ( "%s() failed at %d\n" , __func__ , __LINE__ ) ;
 return NULL ;
 }
 switch ( mode ) {
 case MSPACK_SYS_OPEN_READ : mspack_handle -> type = FILETYPE_FMAP ;
 mspack_name = ( struct mspack_name * ) filename ;
 mspack_handle -> fmap = mspack_name -> fmap ;
 mspack_handle -> org = mspack_name -> org ;
 mspack_handle -> offset = 0 ;
 return ( struct mspack_file * ) mspack_handle ;
 case MSPACK_SYS_OPEN_WRITE : fmode = "wb" ;
 break ;
 case MSPACK_SYS_OPEN_UPDATE : fmode = "r+b" ;
 break ;
 case MSPACK_SYS_OPEN_APPEND : fmode = "ab" ;
 break ;
 default : cli_dbgmsg ( "%s() wrong mode\n" , __func__ ) ;
 goto out_err ;
 }
 mspack_handle -> type = FILETYPE_FILENAME ;
 mspack_handle -> f = fopen ( filename , fmode ) ;
 if ( ! mspack_handle -> f ) {
 cli_dbgmsg ( "%s() failed %d\n" , __func__ , __LINE__ ) ;
 goto out_err ;
 }
 self_ex = ( struct mspack_system_ex * ) ( ( char * ) mptr - offsetof ( struct mspack_system_ex , ops ) ) ;
 mspack_handle -> max_size = self_ex -> max_size ;
 return ( struct mspack_file * ) mspack_handle ;
 out_err : free ( mspack_handle ) ;
 return NULL ;
 }