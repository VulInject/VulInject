static void test_join ( ) {
 MYSQL_STMT * stmt ;
 int rc , i , j ;
 const char * query [ ] = {
 "SELECT * FROM t2 join t1 on (t1.a=t2.a)" , "SELECT * FROM t2 natural join t1" , "SELECT * FROM t2 join t1 using(a)" , "SELECT * FROM t2 left join t1 on(t1.a=t2.a)" , "SELECT * FROM t2 natural left join t1" , "SELECT * FROM t2 left join t1 using(a)" , "SELECT * FROM t2 right join t1 on(t1.a=t2.a)" , "SELECT * FROM t2 natural right join t1" , "SELECT * FROM t2 right join t1 using(a)" }
 ;
 myheader ( "test_join" ) ;
 rc = mysql_query ( mysql , "DROP TABLE IF EXISTS t1, t2" ) ;
 myquery ( rc ) ;
 rc = mysql_query ( mysql , "CREATE TABLE t1 (a int , b int);
" ) ;
 myquery ( rc ) ;
 rc = mysql_query ( mysql , "insert into t1 values (1, 1), (2, 2), (3, 3), (4, 4), (5, 5);
" ) ;
 myquery ( rc ) ;
 rc = mysql_query ( mysql , "CREATE TABLE t2 (a int , c int);
" ) ;
 myquery ( rc ) ;
 rc = mysql_query ( mysql , "insert into t2 values (1, 1), (2, 2), (3, 3), (4, 4), (5, 5);
" ) ;
 myquery ( rc ) ;
 for ( j = 0 ;
 j < 9 ;
 j ++ ) {
 stmt = mysql_simple_prepare ( mysql , query [ j ] ) ;
 check_stmt ( stmt ) ;
 for ( i = 0 ;
 i < 3 ;
 i ++ ) {
 rc = mysql_stmt_execute ( stmt ) ;
 check_execute ( stmt , rc ) ;
 rc = my_process_stmt_result ( stmt ) ;
 DIE_UNLESS ( rc == 5 ) ;
 }
 mysql_stmt_close ( stmt ) ;
 }
 rc = mysql_query ( mysql , "DROP TABLE t1, t2" ) ;
 myquery ( rc ) ;
 }