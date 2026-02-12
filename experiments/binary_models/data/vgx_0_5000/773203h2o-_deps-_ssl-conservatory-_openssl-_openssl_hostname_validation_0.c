static HostnameValidationResult matches_subject_alternative_name(const char *hostname, const X509 *server_cert) {
HostnameValidationResult result = MatchNotFound;
int i;
int san_names_nb = -1;
STACK_OF(GENERAL_NAME) *san_names = NULL;


san_names = X509_get_ext_d2i((X509 *) server_cert, NID_subject_alt_name, NULL, NULL);
if (san_names == NULL) {
return NoSANPresent;
}
san_names_nb = sk_GENERAL_NAME_num(san_names);


for (i=0; i<san_names_nb; i++) {
const GENERAL_NAME *current_name = sk_GENERAL_NAME_value(san_names, i);

if (current_name->type == GEN_DNS) {

result = validate_name(hostname, current_name->d.dNSName);
if (result != MatchNotFound) {
break;
}
}
}
sk_GENERAL_NAME_pop_free(san_names, GENERAL_NAME_free);

return result;
}