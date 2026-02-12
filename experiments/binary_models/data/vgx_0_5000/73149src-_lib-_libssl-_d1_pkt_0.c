int
dtls1_write_app_data_bytes(SSL *s, int type, const void *buf_, int len)
{
int i;

if (SSL_in_init(s) && !s->in_handshake) {
i = s->handshake_func(s);
if (i < 0)
return (i);
if (i == 0) {
SSLerror(s, SSL_R_SSL_HANDSHAKE_FAILURE);
return -1;
}
}

if (len > SSL3_RT_MAX_PLAIN_LENGTH) {
SSLerror(s, SSL_R_DTLS_MESSAGE_TOO_BIG);
return -1;
}

i = dtls1_write_bytes(s, type, buf_, len);
return i;
}