static void test_multi_statements ( ) {
 MYSQL * mysql_local ;
 MYSQL_RES * result ;
 int rc ;
 const char * query = "\ DROP TABLE IF EXISTS test_multi_tab;
\ CREATE TABLE test_multi_tab(id int, name char(20));
\ INSERT INTO test_multi_tab(id) VALUES(10), (20);
\ INSERT INTO test_multi_tab VALUES(20, 'insert;
comma');
\ SELECT * FROM test_multi_tab;
\ UPDATE test_multi_tab SET name='new;
name' WHERE id=20;
\ DELETE FROM test_multi_tab WHERE name='new;
name';
\ SELECT * FROM test_multi_tab;
\ DELETE FROM test_multi_tab WHERE id=10;
\ SELECT * FROM test_multi_tab;
\ DROP TABLE test_multi_tab;
\ select 1;
\ DROP TABLE IF EXISTS test_multi_tab" ;
 uint count , exp_value ;
 uint rows [ ] = {
 0 , 0 , 2 , 1 , 3 , 2 , 2 , 1 , 1 , 0 , 0 , 1 , 0 }
 ;
 myheader ( "test_multi_statements" ) ;
 rc = mysql_query ( mysql , query ) ;
 myquery_r ( rc ) ;
 rc = mysql_next_result ( mysql ) ;
 DIE_UNLESS ( rc == - 1 ) ;
 rc = mysql_more_results ( mysql ) ;
 DIE_UNLESS ( rc == 0 ) ;
 if ( ! ( mysql_local = mysql_client_init ( NULL ) ) ) {
 fprintf ( stdout , "\n mysql_client_init() failed" ) ;
 exit ( 1 ) ;
 }
 if ( ! ( mysql_real_connect ( mysql_local , opt_host , opt_user , opt_password , current_db , opt_port , opt_unix_socket , CLIENT_MULTI_STATEMENTS ) ) ) {
 fprintf ( stdout , "\n connection failed(%s)" , mysql_error ( mysql_local ) ) ;
 exit ( 1 ) ;
 }
 mysql_local -> reconnect = 1 ;
 rc = mysql_query ( mysql_local , query ) ;
 myquery ( rc ) ;
 for ( count = 0 ;
 count < array_elements ( rows ) ;
 count ++ ) {
 if ( ! opt_silent ) fprintf ( stdout , "\n Query %d: " , count ) ;
 if ( ( result = mysql_store_result ( mysql_local ) ) ) {
 ( void ) my_process_result_set ( result ) ;
 mysql_free_result ( result ) ;
 }
 else if ( ! opt_silent ) fprintf ( stdout , "OK, %ld row(s) affected, %ld warning(s)\n" , ( ulong ) mysql_affected_rows ( mysql_local ) , ( ulong ) mysql_warning_count ( mysql_local ) ) ;
 exp_value = ( uint ) mysql_affected_rows ( mysql_local ) ;
 if ( rows [ count ] != exp_value ) {
 fprintf ( stderr , "row %d had affected rows: %d, should be %d\n" , count , exp_value , rows [ count ] ) ;
 exit ( 1 ) ;
 }
 if ( count != array_elements ( rows ) - 1 ) {
 if ( ! ( rc = mysql_more_results ( mysql_local ) ) ) {
 fprintf ( stdout , "mysql_more_result returned wrong value: %d for row %d\n" , rc , count ) ;
 exit ( 1 ) ;
 }
 if ( ( rc = mysql_next_result ( mysql_local ) ) ) {
 exp_value = mysql_errno ( mysql_local ) ;
 exit ( 1 ) ;
 }
 }
 else {
 rc = mysql_more_results ( mysql_local ) ;
 DIE_UNLESS ( rc == 0 ) ;
 rc = mysql_next_result ( mysql_local ) ;
 DIE_UNLESS ( rc == - 1 ) ;
 }
 }
 rc = mysql_query ( mysql_local , "select 1+1+a;
select 1+1" ) ;
 myquery_r ( rc ) ;
 rc = mysql_more_results ( mysql_local ) ;
 DIE_UNLESS ( rc == 0 ) ;
 rc = mysql_next_result ( mysql_local ) ;
 DIE_UNLESS ( rc == - 1 ) ;
 rc = mysql_query ( mysql_local , "select 1+1;
select 1+1+a;
select 1" ) ;
 myquery ( rc ) ;
 result = mysql_store_result ( mysql_local ) ;
 mytest ( result ) ;
 mysql_free_result ( result ) ;
 rc = mysql_more_results ( mysql_local ) ;
 DIE_UNLESS ( rc == 1 ) ;
 rc = mysql_next_result ( mysql_local ) ;
 DIE_UNLESS ( rc > 0 ) ;
 rc = mysql_query ( mysql_local , "select 1+1+1" ) ;
 myquery ( rc ) ;
 result = mysql_store_result ( mysql_local ) ;
 mytest ( result ) ;
 ( void ) my_process_result_set ( result ) ;
 mysql_free_result ( result ) ;
 rc = mysql_query ( mysql_local , "select 1;
 select * from not_existing_table" ) ;
 myquery ( rc ) ;
 result = mysql_store_result ( mysql_local ) ;
 mysql_free_result ( result ) ;
 rc = mysql_next_result ( mysql_local ) ;
 DIE_UNLESS ( rc > 0 ) ;
 rc = mysql_next_result ( mysql_local ) ;
 DIE_UNLESS ( rc < 0 ) ;
 mysql_close ( mysql_local ) ;
 }