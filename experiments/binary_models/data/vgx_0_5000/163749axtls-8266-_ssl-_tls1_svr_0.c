int do_svr_handshake(SSL *ssl, int handshake_type, uint8_t *buf, int hs_len)
{
int ret = SSL_OK;
ssl->hs_status = SSL_NOT_OK;            


switch (handshake_type)
{
case HS_CLIENT_HELLO:
if ((ret = process_client_hello(ssl)) == SSL_OK)
ret = send_server_hello_sequence(ssl);
break;

case HS_CERTIFICATE:
ret = process_certificate(ssl, &ssl->x509_ctx);

if (ret == SSL_OK)    
{ 
int cert_res;
int pathLenConstraint = 0;

cert_res = x509_verify(ssl->ssl_ctx->ca_cert_ctx, 
ssl->x509_ctx, &pathLenConstraint);
ret = (cert_res == 0) ? SSL_OK : SSL_X509_ERROR(cert_res);
}
break;

case HS_CERT_VERIFY:    
ret = process_cert_verify(ssl);
add_packet(ssl, buf, hs_len);   
break;
case HS_CLIENT_KEY_XCHG:
ret = process_client_key_xchg(ssl);
break;

case HS_FINISHED:
ret = process_finished(ssl, buf, hs_len);
disposable_free(ssl);   
break;
}

return ret;
}