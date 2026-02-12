static krb5_error_code
get_ldap_auth_ind(krb5_context context, LDAP *ld, LDAPMessage *ldap_ent,
krb5_db_entry *entry, unsigned int *mask)
{
krb5_error_code ret;
int i;
char **auth_inds = NULL;
struct k5buf buf = EMPTY_K5BUF;

auth_inds = ldap_get_values(ld, ldap_ent, "krbPrincipalAuthInd");
if (auth_inds == NULL)
return 0;

k5_buf_init_dynamic(&buf);


for (i = 0; auth_inds[i] != NULL; i++) {
k5_buf_add(&buf, auth_inds[i]);
if (auth_inds[i + 1] != NULL)
k5_buf_add(&buf, " ");
}

ret = k5_buf_status(&buf);
if (ret)
goto cleanup;

ret = krb5_dbe_set_string(context, entry, KRB5_KDB_SK_REQUIRE_AUTH,
buf.data);
if (!ret)
*mask |= KDB_AUTH_IND_ATTR;

cleanup:
k5_buf_free(&buf);
ldap_value_free(auth_inds);
return ret;
}