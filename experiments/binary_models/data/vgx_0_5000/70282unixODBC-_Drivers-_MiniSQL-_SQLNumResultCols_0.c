SQLRETURN SQLNumResultCols(   SQLHSTMT    hDrvStmt,
SQLSMALLINT *pnColumnCount )
{
HDRVSTMT hStmt	= (HDRVSTMT)hDrvStmt;


if ( NULL == hStmt )
return SQL_INVALID_HANDLE;

sprintf( hStmt->szSqlMsg, "hStmt = $%08lX", hStmt );
logPushMsg( hStmt->hLog, __FILE__, __FILE__, __LINE__, LOG_WARNING, LOG_WARNING, hStmt->szSqlMsg );

if ( hStmt->hStmtExtras->nRows < 0 )
{
logPushMsg( hStmt->hLog, __FILE__, __FILE__, __LINE__, LOG_WARNING, LOG_WARNING, "SQL_ERROR No result set." );
return SQL_ERROR;
}


*pnColumnCount = hStmt->hStmtExtras->nCols;

logPushMsg( hStmt->hLog, __FILE__, __FILE__, __LINE__, LOG_INFO, LOG_INFO, "SQL_SUCCESS" );
return SQL_SUCCESS;
}