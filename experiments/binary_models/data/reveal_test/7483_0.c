void close_statements ( ) {
 struct st_connection * con ;
 DBUG_ENTER ( "close_statements" ) ;
 for ( con = connections ;
 con < next_con ;
 con ++ ) {
 if ( con -> stmt ) mysql_stmt_close ( con -> stmt ) ;
 con -> stmt = 0 ;
 }
 DBUG_VOID_RETURN ;
 }