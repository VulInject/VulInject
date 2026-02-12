
krb5_error_code KRB5_CALLCONV  krb5_init_keyblock
(krb5_context context, krb5_enctype enctype,
size_t length, krb5_keyblock **out)
{
krb5_keyblock *kb;
kb = malloc (sizeof(krb5_keyblock));
assert (out);
*out = NULL;
if (!kb) {
return ENOMEM;
}
kb->magic = KV5M_KEYBLOCK;
kb->enctype = enctype;
kb->length = length;
if(length) {
kb->contents = malloc (length);
if(!kb->contents) {
free (kb);
return ENOMEM;
}
} else {
kb->contents = NULL;
}
kb->dk_list = NULL;
kb->kef_key = NULL;
kb->hKey = CK_INVALID_HANDLE;

*out = kb;
return 0;
}