static bool init_cpuset_if_needed ( struct cgroup_mount_point * mp , const char * path ) {
 if ( ! lxc_string_in_array ( "cpuset" , ( const char * * ) mp -> hierarchy -> subsystems ) ) return true ;
 if ( ! mp -> need_cpuset_init ) return true ;
 return ( do_init_cpuset_file ( mp , path , "/cpuset.cpus" ) && do_init_cpuset_file ( mp , path , "/cpuset.mems" ) ) ;
 }