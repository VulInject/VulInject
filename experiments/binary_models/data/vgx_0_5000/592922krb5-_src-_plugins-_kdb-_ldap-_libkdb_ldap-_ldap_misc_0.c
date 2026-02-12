krb5_error_code
replace_rdn(krb5_context context, const char *dn, const char *newrdn,
char **newdn_out)
{
krb5_error_code ret;
LDAPDN ldn = NULL;
LDAPRDN lrdn = NULL;
char *next;

*newdn_out = NULL;

ret = ldap_str2dn(dn, &ldn, LDAP_DN_FORMAT_LDAPV3);
if (ret != LDAP_SUCCESS || ldn[0] == NULL) {
ret = EINVAL;
goto cleanup;
}

ret = ldap_str2rdn(newrdn, &lrdn, &next, LDAP_DN_FORMAT_LDAPV3);
if (ret != LDAP_SUCCESS) {
ret = EINVAL;
goto cleanup;
}

ldap_rdnfree(ldn[0]);
ldn[0] = lrdn;
lrdn = NULL;

ret = ldap_dn2str(ldn, newdn_out, LDAP_DN_FORMAT_LDAPV3);
if (ret != LDAP_SUCCESS)
ret = KRB5_KDB_SERVER_INTERNAL_ERR;

cleanup:
if (ldn != NULL)
ldap_dnfree(ldn);
if (lrdn != NULL)
ldap_rdnfree(lrdn);
return ret;
}