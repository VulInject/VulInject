void free_replace ( ) {
 DBUG_ENTER ( "free_replace" ) ;
 my_free ( glob_replace ) ;
 glob_replace = NULL ;
 DBUG_VOID_RETURN ;
 }