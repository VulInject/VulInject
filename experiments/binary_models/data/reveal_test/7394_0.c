struct st_connection * find_connection_by_name ( const char * name ) {
 struct st_connection * con ;
 for ( con = connections ;
 con < next_con ;
 con ++ ) {
 if ( ! strcmp ( con -> name , name ) ) {
 return con ;
 }
 }
 return 0 ;
 }