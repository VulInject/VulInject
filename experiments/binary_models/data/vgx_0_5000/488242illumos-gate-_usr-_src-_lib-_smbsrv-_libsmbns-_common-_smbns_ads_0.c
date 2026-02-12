static int
smb_ads_update_computer_cntrl_attr(smb_ads_handle_t *ah, int flags, char *dn)
{
LDAPMod *attrs[2];
char *ctl_val[2];
int ret = 0;
char usrctl_buf[16];

if (smb_ads_alloc_attr(attrs, sizeof (attrs) / sizeof (LDAPMod *)) != 0)
return (LDAP_NO_MEMORY);

attrs[0]->mod_op = LDAP_MOD_REPLACE;
attrs[0]->mod_type = SMB_ADS_ATTR_CTL;

(void) snprintf(usrctl_buf, sizeof (usrctl_buf), "%d", flags);
ctl_val[0] = usrctl_buf;
ctl_val[1] = 0;
attrs[0]->mod_values = ctl_val;
if ((ret = ldap_modify_s(ah->ld, dn, attrs)) != LDAP_SUCCESS) {
syslog(LOG_NOTICE, "ldap_modify: %s", ldap_err2string(ret));
}

smb_ads_free_attr(attrs);
return (ret);
}