static krb5_error_code
test_gic_opt(krb5_context kcontext, krb5_clpreauth_moddata moddata,
krb5_get_init_creds_opt *opt, const char *attr, const char *value)
{
struct client_state *st = (struct client_state *)moddata;

if (strcmp(attr, "indicators") == 0) {
free(st->indicators);
st->indicators = strdup(value);
assert(st->indicators != NULL);
} else if (strcmp(attr, "fail_optimistic") == 0) {
st->fail_optimistic = TRUE;
} else if (strcmp(attr, "fail_2rt") == 0) {
st->fail_2rt = TRUE;
} else if (strcmp(attr, "fail_tryagain") == 0) {
st->fail_tryagain = TRUE;
} else if (strcmp(attr, "disable_fallback") == 0) {
st->disable_fallback = TRUE;
}
return 0;
}