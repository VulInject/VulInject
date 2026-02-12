cherokee_error_errno_log (int                    errnumber,
cherokee_error_type_t  type,
const char            *filename,
int                    line,
int                    error_num, ...)
{
va_list            ap;
const char        *errstr;
char               err_tmp[ERROR_MAX_BUFSIZE];
cherokee_buffer_t  error_str = CHEROKEE_BUF_INIT;


va_start (ap, error_num);
render (type, filename, line, error_num, ap, &error_str);
va_end (ap);


errstr = cherokee_strerror_r (errnumber, err_tmp, sizeof(err_tmp));
if (errstr == NULL) {
errstr = "unknwon error (?)";
}

cherokee_buffer_replace_string (&error_str, (char *)"${errno}", 8,
(char *) errstr, strlen(errstr));


report_error (&error_str);


cherokee_buffer_mrproper (&error_str);
return ret_ok;
}