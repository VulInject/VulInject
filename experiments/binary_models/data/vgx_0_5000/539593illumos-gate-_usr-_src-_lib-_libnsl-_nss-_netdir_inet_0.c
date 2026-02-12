struct hostent *
_switch_gethostbyaddr_r(const char *addr, int len, int type,
struct hostent *result, char *buffer, int buflen, int *h_errnop)
{
nss_XbyY_args_t arg;
nss_status_t	res;

NSS_XbyY_INIT(&arg, result, buffer, buflen, str2hostent);
arg.key.hostaddr.addr	= addr;
arg.key.hostaddr.len	= len;
arg.key.hostaddr.type	= type;
arg.stayopen		= 0;
res = nss_search(&db_root_hosts, _nss_initf_hosts,
NSS_DBOP_HOSTS_BYADDR, &arg);
arg.status = res;
if (res != NSS_SUCCESS)
*h_errnop = arg.h_errno ? arg.h_errno : __nss2herrno(res);
return (struct hostent *)NSS_XbyY_FINI(&arg);
}