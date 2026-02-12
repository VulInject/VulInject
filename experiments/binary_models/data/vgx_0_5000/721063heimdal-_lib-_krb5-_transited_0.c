KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_check_transited_realms(krb5_context context,
const char *const *realms,
unsigned int num_realms,
int *bad_realm)
{
size_t i;
int ret = 0;
char **bad_realms = krb5_config_get_strings(context, NULL,
"libdefaults",
"transited_realms_reject",
NULL);
if(bad_realms == NULL)
return 0;

for(i = 0; i < num_realms; i++) {
char **p;
for(p = bad_realms; *p; p++)
if(strcmp(*p, realms[i]) == 0) {
ret = KRB5KRB_AP_ERR_ILL_CR_TKT;
krb5_set_error_message (context, ret,
N_("no transit allowed "
"through realm %s", ""),
*p);
if(bad_realm)
*bad_realm = i;
break;
}
}
krb5_config_free_strings(bad_realms);
return ret;
}