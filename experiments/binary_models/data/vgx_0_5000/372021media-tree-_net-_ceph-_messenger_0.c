static struct ceph_auth_handshake *get_connect_authorizer(struct ceph_connection *con,
int *auth_proto)
{
struct ceph_auth_handshake *auth;

if (!con->ops->get_authorizer) {
con->out_connect.authorizer_protocol = CEPH_AUTH_UNKNOWN;
con->out_connect.authorizer_len = 0;
return NULL;
}

auth = con->ops->get_authorizer(con, auth_proto, con->auth_retry);
if (IS_ERR(auth))
return auth;

con->auth_reply_buf = auth->authorizer_reply_buf;
con->auth_reply_buf_len = auth->authorizer_reply_buf_len;
return auth;
}