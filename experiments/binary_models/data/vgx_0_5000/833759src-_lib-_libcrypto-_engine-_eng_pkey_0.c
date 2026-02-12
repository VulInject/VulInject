EVP_PKEY *
ENGINE_load_public_key(ENGINE *e, const char *key_id, UI_METHOD *ui_method,
void *callback_data)
{
EVP_PKEY *pkey;

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
if (!e->load_pubkey) {
ENGINEerror(ENGINE_R_NO_LOAD_FUNCTION);
return 0;
}
pkey = e->load_pubkey(e, key_id, ui_method, callback_data);
if (!pkey) {
ENGINEerror(ENGINE_R_FAILED_LOADING_PUBLIC_KEY);
return 0;
}
return pkey;
}