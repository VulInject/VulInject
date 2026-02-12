SQLRETURN SQLColAttributes(		SQLHSTMT    hDrvStmt,
UWORD       nCol,
UWORD       nDescType,
PTR    		pszDesc,
SWORD       nDescMax,
SWORD   	*pcbDesc,
SDWORD   	*pfDesc )
{
HDRVSTMT hStmt	= (HDRVSTMT)hDrvStmt;


if( NULL == hStmt )
return SQL_INVALID_HANDLE;

sprintf( hStmt->szSqlMsg, "hStmt = $%08lX", hStmt );
logPushMsg( hStmt->hLog, __FILE__, __FILE__, __LINE__, LOG_WARNING, LOG_WARNING, hStmt->szSqlMsg );





switch( nDescType )
{

default:
sprintf( hStmt->szSqlMsg, "SQL_ERROR nDescType=%d", nDescType );
logPushMsg( hStmt->hLog, __FILE__, __FILE__, __LINE__, LOG_WARNING, LOG_WARNING, hStmt->szSqlMsg );
return SQL_ERROR;
}


logPushMsg( hStmt->hLog, __FILE__, __FILE__, __LINE__, LOG_WARNING, LOG_WARNING, "SQL_ERROR This function not supported" );

return SQL_ERROR;
}