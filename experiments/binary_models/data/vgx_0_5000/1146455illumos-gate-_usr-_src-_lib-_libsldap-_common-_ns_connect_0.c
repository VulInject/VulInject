static int
ldap_in_nss_switch(char *db)
{
enum __nsw_parse_err		pserr;
struct __nsw_switchconfig	*conf;
struct __nsw_lookup		*lkp;
const char			*name;
int				found = 0;

conf = __nsw_getconfig(db, &pserr);
if (conf == NULL) {
return (-1);
}


for (lkp = conf->lookups; lkp != NULL; lkp = lkp->next) {
name = lkp->service_name;
if (strcmp(name, "ldap") == 0) {
found = 1;
break;
}
}
(void) __nsw_freeconfig(conf);
return (found);
}