int multimedia_auth_request(struct sip_msg *msg, str public_identity, str private_identity,
int count, str auth_scheme, str nonce, str auts, str servername, saved_transaction_t* transaction_data) {


str authorization = {0, 0};
int result = -1;

int is_sync = 0;
if (auts.len) {
authorization.s = pkg_malloc(nonce.len * 3 / 4 + auts.len * 3 / 4 + 8);
if (!authorization.s)  {
LM_ERR("no more pkg mem\n");
return result;
}
authorization.len = base64_to_bin(nonce.s, nonce.len, authorization.s);
authorization.len = RAND_LEN;
authorization.len += base64_to_bin(auts.s, auts.len, authorization.s + authorization.len);
is_sync = 1;
}

if (is_sync) {
drop_auth_userdata(private_identity, public_identity);
}


LM_DBG("Sending MAR\n");
result = cxdx_send_mar(msg, public_identity, private_identity, count, auth_scheme, authorization, servername, transaction_data);
if (authorization.s) pkg_free(authorization.s);

return result;
}