void
ecpg_log(const char *format,...)
{
va_list		ap;
struct sqlca_t *sqlca = ECPGget_sqlca();
const char *intl_format;
int			bufsize;
char	   *fmt;

if (!simple_debug)
return;


intl_format = ecpg_gettext(format);


bufsize = strlen(intl_format) + 100;
fmt = (char *) malloc(bufsize);
if (fmt == NULL)
return;

if (ecpg_internal_regression_mode)
snprintf(fmt, bufsize, "[NO_PID]: %s", intl_format);
else
snprintf(fmt, bufsize, "[%d]: %s", (int) getpid(), intl_format);

pthread_mutex_lock(&debug_mutex);

va_start(ap, format);
vfprintf(debugstream, fmt, ap);
va_end(ap);


if (ecpg_internal_regression_mode && sqlca != NULL)
{
fprintf(debugstream, "[NO_PID]: sqlca: code: %ld, state: %s\n",
sqlca->sqlcode, sqlca->sqlstate);
}

fflush(debugstream);

pthread_mutex_unlock(&debug_mutex);

free(fmt);
}