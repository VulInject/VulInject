SQLRETURN _FreeConnect( SQLHDBC hDrvDbc )
{
HDRVDBC	hDbc	= (HDRVDBC)hDrvDbc;
int		nReturn;


if( NULL == hDbc )
return SQL_INVALID_HANDLE;

sprintf((char*) hDbc->szSqlMsg, "hDbc = $%08lX", (long)hDbc );
logPushMsg( hDbc->hLog, __FILE__, __FILE__, __LINE__, LOG_WARNING, LOG_WARNING, (char*)hDbc->szSqlMsg );

if( hDbc->bConnected )
{
logPushMsg( hDbc->hLog, __FILE__, __FILE__, __LINE__, LOG_WARNING, LOG_WARNING, "SQL_ERROR Connection is active" );
return SQL_ERROR;
}

if ( hDbc->hFirstStmt != NULL )
{
logPushMsg( hDbc->hLog, __FILE__, __FILE__, __LINE__, LOG_WARNING, LOG_WARNING, "SQL_ERROR Connection has allocated statements" );
return SQL_ERROR;
}

nReturn = _FreeDbc( hDbc );

return nReturn;

}