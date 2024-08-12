int cli_scanmscab ( cli_ctx * ctx , off_t sfx_offset ) {
 struct mscab_decompressor * cab_d ;
 struct mscabd_cabinet * cab_h ;
 struct mscabd_file * cab_f ;
 int ret ;
 int files ;
 int virus_num = 0 ;
 struct mspack_name mspack_fmap = {
 . fmap = * ctx -> fmap , . org = sfx_offset , }
 ;
 struct mspack_system_ex ops_ex ;
 memset ( & ops_ex , 0 , sizeof ( struct mspack_system_ex ) ) ;
 ops_ex . ops = mspack_sys_fmap_ops ;
 MSPACK_SYS_SELFTEST ( ret ) ;
 if ( ret ) {
 cli_dbgmsg ( "%s() failed at %d\n" , __func__ , __LINE__ ) ;
 return CL_EUNPACK ;
 }
 cab_d = mspack_create_cab_decompressor ( & ops_ex . ops ) ;
 if ( ! cab_d ) {
 cli_dbgmsg ( "%s() failed at %d\n" , __func__ , __LINE__ ) ;
 return CL_EUNPACK ;
 }
 cab_h = cab_d -> open ( cab_d , ( char * ) & mspack_fmap ) ;
 if ( ! cab_h ) {
 ret = CL_EFORMAT ;
 cli_dbgmsg ( "%s() failed at %d\n" , __func__ , __LINE__ ) ;
 goto out_dest ;
 }
 files = 0 ;
 for ( cab_f = cab_h -> files ;
 cab_f ;
 cab_f = cab_f -> next ) {
 off_t max_size ;
 char * tmp_fname ;
 ret = cli_matchmeta ( ctx , cab_f -> filename , 0 , cab_f -> length , 0 , files , 0 , NULL ) ;
 if ( ret ) {
 if ( ret == CL_VIRUS ) {
 virus_num ++ ;
 if ( ! SCAN_ALL ) break ;
 }
 goto out_close ;
 }
 if ( ctx -> engine -> maxscansize ) {
 if ( ctx -> scansize >= ctx -> engine -> maxscansize ) {
 ret = CL_CLEAN ;
 break ;
 }
 }
 if ( ctx -> engine -> maxscansize && ctx -> scansize + ctx -> engine -> maxfilesize >= ctx -> engine -> maxscansize ) max_size = ctx -> engine -> maxscansize - ctx -> scansize ;
 else max_size = ctx -> engine -> maxfilesize ? ctx -> engine -> maxfilesize : 0xffffffff ;
 tmp_fname = cli_gentemp ( ctx -> engine -> tmpdir ) ;
 if ( ! tmp_fname ) {
 ret = CL_EMEM ;
 break ;
 }
 ops_ex . max_size = max_size ;
 ret = cab_d -> extract ( cab_d , cab_f , tmp_fname ) ;
 if ( ret ) cli_dbgmsg ( "%s() failed to extract %d\n" , __func__ , ret ) ;
 ret = cli_scanfile ( tmp_fname , ctx ) ;
 if ( ret == CL_VIRUS ) virus_num ++ ;
 if ( ! ctx -> engine -> keeptmp ) {
 if ( ! access ( tmp_fname , R_OK ) && cli_unlink ( tmp_fname ) ) {
 free ( tmp_fname ) ;
 ret = CL_EUNLINK ;
 break ;
 }
 }
 free ( tmp_fname ) ;
 files ++ ;
 if ( ret == CL_VIRUS && SCAN_ALL ) continue ;
 if ( ret ) break ;
 }
 out_close : cab_d -> close ( cab_d , cab_h ) ;
 out_dest : mspack_destroy_cab_decompressor ( cab_d ) ;
 if ( virus_num ) return CL_VIRUS ;
 return ret ;
 }