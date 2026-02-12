au_user_str_t *
_getauusernam(const char *name, au_user_str_t *result, char *buffer,
int buflen, int *errnop)
{
nss_XbyY_args_t arg;
nss_status_t    res;

if (result == NULL) {
*errnop = AUDITUSER_PARSE_ERANGE;
return (NULL);
}
NSS_XbyY_INIT(&arg, result, buffer, buflen, str2auuser);
arg.key.name = name;
arg.stayopen = auuser_stayopen;
arg.h_errno = AUDITUSER_NOT_FOUND;
res = nss_search(&db_root, _nss_initf_auuser,
NSS_DBOP_AUDITUSER_BYNAME, &arg);
arg.status = res;
*errnop = arg.h_errno;
return ((au_user_str_t *)NSS_XbyY_FINI(&arg));
}