static struct cgroup_process_info * lxc_cgroup_get_container_info ( const char * name , const char * lxcpath , struct cgroup_meta_data * meta_data ) {
 struct cgroup_process_info * result = NULL ;
 int saved_errno = 0 ;
 size_t i ;
 struct cgroup_process_info * * cptr = & result ;
 struct cgroup_process_info * entry = NULL ;
 char * path = NULL ;
 for ( i = 0 ;
 i <= meta_data -> maximum_hierarchy ;
 i ++ ) {
 struct cgroup_hierarchy * h = meta_data -> hierarchies [ i ] ;
 if ( ! h || ! h -> used ) continue ;
 path = lxc_cmd_get_cgroup_path ( name , lxcpath , h -> subsystems [ 0 ] ) ;
 if ( ! path ) {
 h -> used = false ;
 WARN ( "Not attaching to cgroup %s unknown to %s %s" , h -> subsystems [ 0 ] , lxcpath , name ) ;
 continue ;
 }
 entry = calloc ( 1 , sizeof ( struct cgroup_process_info ) ) ;
 if ( ! entry ) goto out_error ;
 entry -> meta_ref = lxc_cgroup_get_meta ( meta_data ) ;
 entry -> hierarchy = h ;
 entry -> cgroup_path = path ;
 path = NULL ;
 entry -> designated_mount_point = lxc_cgroup_find_mount_point ( h , entry -> cgroup_path , true ) ;
 * cptr = entry ;
 cptr = & entry -> next ;
 entry = NULL ;
 }
 return result ;
 out_error : saved_errno = errno ;
 free ( path ) ;
 lxc_cgroup_process_info_free ( result ) ;
 lxc_cgroup_process_info_free ( entry ) ;
 errno = saved_errno ;
 return NULL ;
 }