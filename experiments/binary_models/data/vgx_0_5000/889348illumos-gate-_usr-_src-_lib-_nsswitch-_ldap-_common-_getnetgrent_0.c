static nss_status_t
netgr_in(ldap_backend_ptr be, void *a)
{
struct nss_innetgr_args	*ia = (struct nss_innetgr_args *)a;
int	i;
nss_status_t	rc = (nss_status_t)NSS_NOTFOUND;

ia->status = NSS_NETGR_NO;
for (i = 0; i < ia->groups.argc; i++) {
rc = __netgr_in(a, ia->groups.argv[i]);
if (ia->status == NSS_NETGR_FOUND)
return (NSS_SUCCESS);
}
return (rc);
}