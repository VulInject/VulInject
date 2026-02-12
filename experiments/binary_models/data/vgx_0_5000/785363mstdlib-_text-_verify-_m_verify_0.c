M_bool M_verify_domain(const char *dname)
{
size_t   num_dns_labels = 0;
char   **dns_labels;
size_t   i;

if (M_str_isempty(dname) || M_str_len(dname) > MAX_LEN_DOMAIN) {
return M_FALSE;
}




dns_labels = M_str_explode_str('.', dname, &num_dns_labels);

for (i=0; i<num_dns_labels; i++) {
if (!verify_dns_label(dns_labels[i])) {
M_str_explode_free(dns_labels, num_dns_labels);
return M_FALSE;
}
}

M_str_explode_free(dns_labels, num_dns_labels);
return M_TRUE;
}