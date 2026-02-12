int
ENGINE_load_ssl_client_cert(ENGINE *e, SSL *s, STACK_OF(X509_NAME) *ca_dn,
X509 **pcert, EVP_PKEY **ppkey, STACK_OF(X509) **pother,
UI_METHOD *ui_method, void *callback_data)
{
if (e == NULL) {
ENGINEerror(ERR_R_PASSED_NULL_PARAMETER);
return 0;
}
CRYPTO_w_lock(CRYPTO_LOCK_ENGINE);
if (e->funct_ref == 0) {
CRYPTO_w_unlock(CRYPTO_LOCK_ENGINE);
ENGINEerror(ENGINE_R_NOT_INITIALISED);
return 0;
}
CRYPTO_w_unlock(CRYPTO_LOCK_ENGINE);
if (!e->load_ssl_client_cert) {
ENGINEerror(ENGINE_R_NO_LOAD_FUNCTION);
return 0;
}
return e->load_ssl_client_cert(e, s, ca_dn, pcert, ppkey, pother,
ui_method, callback_data);
}