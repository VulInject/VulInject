int send_certificate(SSL *ssl)
{
int ret = SSL_OK;
int i = 0;
uint8_t *buf = ssl->bm_data;
int offset = 7;
int chain_length;

buf[0] = HS_CERTIFICATE;
buf[1] = 0;
buf[4] = 0;


if (ssl->version >= SSL_PROTOCOL_VERSION_TLS1_2 &&
((ret = check_certificate_chain(ssl)) != SSL_OK))
{
ret = SSL_ERROR_INVALID_CERT_HASH_ALG;
goto error;
}

while (i < ssl->ssl_ctx->chain_length)
{
SSL_CERT *cert = &ssl->ssl_ctx->certs[i];
buf[offset++] = 0;        
buf[offset++] = cert->size >> 8;        
buf[offset++] = cert->size & 0xff;
memcpy(&buf[offset], cert->buf, cert->size);
offset += cert->size;
i++;
}

chain_length = offset - 7;
buf[5] = chain_length >> 8;        
buf[6] = chain_length & 0xff;
chain_length += 3;
buf[2] = chain_length >> 8;        
buf[3] = chain_length & 0xff;
ssl->bm_index = offset;
ret = send_packet(ssl, PT_HANDSHAKE_PROTOCOL, NULL, offset);

error:
return ret;
}