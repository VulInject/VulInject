SQLRETURN SQLDescribeParam( SQLHSTMT      hDrvStmt,
SQLUSMALLINT  nParmNumber,
SQLSMALLINT   *pnDataType,
SQLULEN   *pnSize,
SQLSMALLINT   *pnDecDigits,
SQLSMALLINT   *pnNullable )
{
HDRVSTMT hStmt	= (HDRVSTMT)hDrvStmt;


if( NULL == hStmt )
return SQL_INVALID_HANDLE;

sprintf((char*) hStmt->szSqlMsg, "hStmt = $%08lX", (long)hStmt );
logPushMsg( hStmt->hLog, __FILE__, __FILE__, __LINE__, LOG_WARNING, LOG_WARNING,(char*) hStmt->szSqlMsg );


logPushMsg( hStmt->hLog, __FILE__, __FILE__, __LINE__, LOG_WARNING, LOG_WARNING, "SQL_ERROR This function not supported" );


return SQL_ERROR;
}