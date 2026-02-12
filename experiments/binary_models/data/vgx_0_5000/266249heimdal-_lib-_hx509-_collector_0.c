HX509_LIB_FUNCTION int HX509_LIB_CALL
_hx509_collector_collect_certs(hx509_context context,
struct hx509_collector *c,
hx509_certs *ret_certs)
{
hx509_certs certs;
int ret;
size_t i;

*ret_certs = NULL;

ret = hx509_certs_init(context, "MEMORY:collector-store", 0, NULL, &certs);
if (ret)
return ret;

ret = hx509_certs_merge(context, certs, c->certs);
if (ret) {
hx509_certs_free(&certs);
return ret;
}

for (i = 0; i < c->val.len; i++) {
ret = match_localkeyid(context, c->val.data[i], certs);
if (ret == 0)
continue;
ret = match_keys(context, c->val.data[i], certs);
if (ret == 0)
continue;
}

*ret_certs = certs;

return 0;
}