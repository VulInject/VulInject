static krb5_error_code
filter_supported_tokeninfos(krb5_context context, krb5_otp_tokeninfo **tis)
{
size_t i, j;


for (i = 0, j = 0; tis[i] != NULL; i++) {
if (!is_tokeninfo_supported(tis[i]))
k5_free_otp_tokeninfo(context, tis[i]);
else
tis[j++] = tis[i];
}


tis[j] = NULL;

if (tis[0] != NULL)
return 0;

k5_setmsg(context, KRB5_PREAUTH_FAILED, _("No supported tokens"));
return KRB5_PREAUTH_FAILED; 
}