static void test_bug38486 ( void ) {
 MYSQL_STMT * stmt ;
 const char * stmt_text ;
 unsigned long type = CURSOR_TYPE_READ_ONLY ;
 DBUG_ENTER ( "test_bug38486" ) ;
 myheader ( "test_bug38486" ) ;
 stmt = mysql_stmt_init ( mysql ) ;
 mysql_stmt_attr_set ( stmt , STMT_ATTR_CURSOR_TYPE , ( void * ) & type ) ;
 stmt_text = "CREATE TABLE t1 (a INT)" ;
 mysql_stmt_prepare ( stmt , stmt_text , strlen ( stmt_text ) ) ;
 mysql_stmt_execute ( stmt ) ;
 mysql_stmt_close ( stmt ) ;
 stmt = mysql_stmt_init ( mysql ) ;
 mysql_stmt_attr_set ( stmt , STMT_ATTR_CURSOR_TYPE , ( void * ) & type ) ;
 stmt_text = "INSERT INTO t1 VALUES (1)" ;
 mysql_stmt_prepare ( stmt , stmt_text , strlen ( stmt_text ) ) ;
 mysql_stmt_execute ( stmt ) ;
 mysql_stmt_close ( stmt ) ;
 DBUG_VOID_RETURN ;
 }