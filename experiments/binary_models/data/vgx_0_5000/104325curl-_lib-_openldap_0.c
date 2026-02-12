static CURLcode oldap_perform_auth(struct Curl_easy *data, const char *mech,
const struct bufref *initresp)
{
struct connectdata *conn = data->conn;
struct ldapconninfo *li = conn->proto.ldapc;
CURLcode result = CURLE_OK;
struct berval cred;
struct berval *pcred = &cred;
int rc;

cred.bv_val = (char *) Curl_bufref_ptr(initresp);
cred.bv_len = Curl_bufref_len(initresp);
if(!cred.bv_val)
pcred = NULL;
rc = ldap_sasl_bind(li->ld, NULL, mech, pcred, NULL, NULL, &li->msgid);
if(rc != LDAP_SUCCESS)
result = oldap_map_error(rc, CURLE_LDAP_CANNOT_BIND);
return result;
}