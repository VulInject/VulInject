krb5_error_code
k5_canonprinc(krb5_context context, struct canonprinc *iter,
krb5_const_principal *princ_out)
{
krb5_error_code ret;
int step = ++iter->step;

*princ_out = NULL;


if (iter->princ->type != KRB5_NT_SRV_HST || iter->princ->length != 2 ||
iter->princ->data[1].length == 0) {
*princ_out = (step == 1) ? iter->princ : NULL;
return 0;
}


if (context->dns_canonicalize_hostname != CANONHOST_FALLBACK) {
if (step > 1)
return 0;
iter->copy = *iter->princ;
if (iter->subst_defrealm && iter->copy.realm.length == 0) {
ret = krb5_get_default_realm(context, &iter->realm);
if (ret)
return ret;
iter->copy = *iter->princ;
iter->copy.realm = string2data(iter->realm);
}
*princ_out = &iter->copy;
return 0;
}


if (step > 2)
return 0;
return canonicalize_princ(context, iter, step == 2, princ_out);
}