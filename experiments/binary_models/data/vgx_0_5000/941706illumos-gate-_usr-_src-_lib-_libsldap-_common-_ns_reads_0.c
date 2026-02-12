static int
get_current_session(ns_ldap_cookie_t *cookie)
{
ConnectionID	connectionId = -1;
Connection	*conp = NULL;
int		rc;
int		fail_if_new_pwd_reqd = 1;

rc = __s_api_getConnection(NULL, cookie->i_flags,
cookie->i_auth, &connectionId, &conp,
&cookie->errorp, fail_if_new_pwd_reqd,
cookie->nopasswd_acct_mgmt, cookie->conn_user);


if (rc == NS_LDAP_SUCCESS_WITH_INFO) {
(void) __ns_ldap_freeError(
&cookie->errorp);
cookie->errorp = NULL;
rc = NS_LDAP_SUCCESS;
}

if (rc != NS_LDAP_SUCCESS) {
cookie->err_rc = rc;
return (-1);
}
cookie->conn = conp;
cookie->connectionId = connectionId;

return (0);
}