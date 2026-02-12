static int
do_dirname(GENERAL_NAME *gen, const char *value, X509V3_CTX *ctx)
{
int ret;
STACK_OF(CONF_VALUE) *sk;
X509_NAME *nm;

if (!(nm = X509_NAME_new()))
return 0;
sk = X509V3_get_section(ctx, value);
if (!sk) {
X509V3error(X509V3_R_SECTION_NOT_FOUND);
ERR_asprintf_error_data("section=%s", value);
X509_NAME_free(nm);
return 0;
}

ret = X509V3_NAME_from_section(nm, sk, MBSTRING_ASC);
if (!ret)
X509_NAME_free(nm);
gen->d.dirn = nm;
X509V3_section_free(ctx, sk);

return ret;
}