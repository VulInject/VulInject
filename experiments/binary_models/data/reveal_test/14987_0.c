static void test_subqueries ( ) {
 MYSQL_STMT * stmt ;
 int rc , i ;
 const char * query = "SELECT (SELECT SUM(a+b) FROM t2 where t1.b=t2.b GROUP BY t1.a LIMIT 1) as scalar_s, exists (select 1 from t2 where t2.a/2=t1.a) as exists_s, a in (select a+3 from t2) as in_s, (a-1, b-1) in (select a, b from t2) as in_row_s FROM t1, (select a x, b y from t2) tt WHERE x=a" ;
 myheader ( "test_subqueries" ) ;
 rc = mysql_query ( mysql , "DROP TABLE IF EXISTS t1, t2" ) ;
 myquery ( rc ) ;
 rc = mysql_query ( mysql , "CREATE TABLE t1 (a int , b int);
" ) ;
 myquery ( rc ) ;
 rc = mysql_query ( mysql , "insert into t1 values (1, 1), (2, 2), (3, 3), (4, 4), (5, 5);
" ) ;
 myquery ( rc ) ;
 rc = mysql_query ( mysql , "create table t2 select * from t1;
" ) ;
 myquery ( rc ) ;
 stmt = mysql_simple_prepare ( mysql , query ) ;
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
 rc = mysql_query ( mysql , "DROP TABLE t1, t2" ) ;
 myquery ( rc ) ;
 }