static M_bool M_tls_verify_host_extract_base_domain(const char *hostname, char *basedomain, size_t basedomain_len)
{
char       **strs;
size_t       num  = 0;
size_t       domain_sects;
char        *out;


strs = M_str_explode_str('.', hostname, &num);


if (strs && num && M_str_len(strs[num-1]) == 2) {
domain_sects = 3; 
} else {
domain_sects = 2;
}


if (domain_sects >= num) {
M_str_explode_free(strs, num);
M_str_cpy(basedomain, basedomain_len, hostname);
return M_TRUE;
}


out = M_str_implode('.', 0, 0, &(strs[num-domain_sects]), domain_sects, M_FALSE);
M_str_explode_free(strs, num);

if (out == NULL || *out == '\0') {
M_str_cpy(basedomain, basedomain_len, hostname);
return M_FALSE;
}

M_str_cpy(basedomain, basedomain_len, out);
M_free(out);
return M_TRUE;
}