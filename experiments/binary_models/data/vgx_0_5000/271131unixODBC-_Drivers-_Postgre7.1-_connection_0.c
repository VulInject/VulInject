EnvironmentClass *env = (EnvironmentClass *)henv;
ConnectionClass *conn;
static char* const func="SQLAllocConnect";

mylog( "%s: entering...\n", func);

conn = CC_Constructor();
mylog("**** %s: henv = %u, conn = %u\n", func, henv, conn);

if( ! conn) {
env->errornumber = ENV_ALLOC_ERROR;
env->errormsg = "Couldn't allocate memory for Connection object.";
*phdbc = SQL_NULL_HDBC;
EN_log_error(func, "", env);
return SQL_ERROR;
}

if ( ! EN_add_connection(env, conn)) {
env->errornumber = ENV_ALLOC_ERROR;
env->errormsg = "Maximum number of connections exceeded.";
CC_Destructor(conn);
*phdbc = SQL_NULL_HDBC;
EN_log_error(func, "", env);
return SQL_ERROR;
}

*phdbc = (HDBC) conn;

return SQL_SUCCESS;
}