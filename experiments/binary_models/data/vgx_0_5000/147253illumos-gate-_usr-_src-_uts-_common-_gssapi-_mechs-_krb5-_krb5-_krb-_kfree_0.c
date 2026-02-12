void KRB5_CALLCONV
krb5_free_keyblock_contents(krb5_context context, register krb5_keyblock *key)
{
if (key->contents) {
(void) memset(key->contents, 0, key->length);
krb5_xfree_wrap(key->contents, key->length);
key->length = 0;
key->contents = 0;
}
if (key->key_tmpl != NULL)
(void) crypto_destroy_ctx_template(key->key_tmpl);
if (key->hKey != CK_INVALID_HANDLE) {
CK_RV rv;
rv = C_DestroyObject(krb_ctx_hSession(context), key->hKey);
if (rv != CKR_OK) {
KRB5_LOG(KRB5_ERR, "krb5_free_keyblock_contents: "
"C_DestroyObject = %0x", rv);
}
key->hKey = CK_INVALID_HANDLE;
}

cleanup_dk_list(context, key);
}