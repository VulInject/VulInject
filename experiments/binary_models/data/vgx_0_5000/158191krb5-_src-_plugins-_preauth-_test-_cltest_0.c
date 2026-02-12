static krb5_error_code
test_tryagain(krb5_context context, krb5_clpreauth_moddata moddata,
krb5_clpreauth_modreq modreq, krb5_get_init_creds_opt *opt,
krb5_clpreauth_callbacks cb, krb5_clpreauth_rock rock,
krb5_kdc_req *request, krb5_data *enc_req, krb5_data *enc_prev,
krb5_preauthtype pa_type, krb5_error *error,
krb5_pa_data **padata, krb5_prompter_fct prompter,
void *prompter_data, krb5_pa_data ***padata_out)
{
struct client_state *st = (struct client_state *)moddata;
int i;

*padata_out = NULL;
if (st->fail_tryagain) {
k5_setmsg(context, KRB5_PREAUTH_FAILED, "induced tryagain fail");
return KRB5_PREAUTH_FAILED;
}
if (error->error != KDC_ERR_ENCTYPE_NOSUPP)
return KRB5_PREAUTH_FAILED;
for (i = 0; padata[i] != NULL; i++) {
if (padata[i]->pa_type == TEST_PA_TYPE)
printf("tryagain: %.*s\n", padata[i]->length, padata[i]->contents);
}
*padata_out = make_pa_list("tryagain", 8);
return 0;
}