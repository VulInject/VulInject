int _s2s_populate_whitelist_domains(s2s_t s2s, const char **values, int nvalues) {
int i, j;
int elem_len;
s2s->whitelist_domains = (char **)malloc(sizeof(char*) * (nvalues));
memset(s2s->whitelist_domains, 0, (sizeof(char *) * (nvalues)));
for (i = 0, j = 0; i < nvalues; i++) {
elem_len = strlen(values[i]);
if (elem_len > MAX_DOMAIN_LEN) {
log_debug(ZONE, "whitelist domain element is too large, skipping");
continue;
}
if (elem_len == 0) {
log_debug(ZONE, "whitelist domain element is blank, skipping");
continue;
}
s2s->whitelist_domains[j] = (char *) malloc(sizeof(char) * (elem_len+1));
strncpy(s2s->whitelist_domains[j], values[i], elem_len);
s2s->whitelist_domains[j][elem_len] = '\0';
log_debug(ZONE, "s2s whitelist domain read from file: %s\n", s2s->whitelist_domains[j]);
j++;
}

s2s->n_whitelist_domains = j;
log_debug(ZONE, "n_whitelist_domains = %d", s2s->n_whitelist_domains);
return 0;
}