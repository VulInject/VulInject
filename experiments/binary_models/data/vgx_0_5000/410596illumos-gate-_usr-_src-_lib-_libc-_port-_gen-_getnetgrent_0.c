int
__multi_innetgr(ngroup,	pgroup,
nhost,	phost,
nuser,	puser,
ndomain, pdomain)
nss_innetgr_argc	ngroup, nhost, nuser, ndomain;
nss_innetgr_argv	pgroup, phost, puser, pdomain;
{
struct nss_innetgr_args	ia;

if (ngroup == 0) {
return (0);	
}

ia.groups.argc			= ngroup;
ia.groups.argv			= pgroup;
ia.arg[NSS_NETGR_MACHINE].argc	= nhost;
ia.arg[NSS_NETGR_MACHINE].argv	= phost;
ia.arg[NSS_NETGR_USER].argc	= nuser;
ia.arg[NSS_NETGR_USER].argv	= puser;
ia.arg[NSS_NETGR_DOMAIN].argc	= ndomain;
ia.arg[NSS_NETGR_DOMAIN].argv	= pdomain;
ia.status			= NSS_NETGR_NO;

(void) nss_search(&db_root, _nss_initf_netgroup,
NSS_DBOP_NETGROUP_IN, &ia);
return (ia.status == NSS_NETGR_FOUND);
}