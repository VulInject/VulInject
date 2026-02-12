const EVP_PKEY_ASN1_METHOD *
ENGINE_pkey_asn1_find_str(ENGINE **pe, const char *str, int len)
{
ENGINE_FIND_STR fstr;

fstr.e = NULL;
fstr.ameth = NULL;
fstr.str = str;
fstr.len = len;
CRYPTO_w_lock(CRYPTO_LOCK_ENGINE);
engine_table_doall(pkey_asn1_meth_table, look_str_cb, &fstr);

if (fstr.e) {
fstr.e->struct_ref++;
engine_ref_debug(fstr.e, 0, 1)
}
*pe = fstr.e;
CRYPTO_w_unlock(CRYPTO_LOCK_ENGINE);
return fstr.ameth;
}