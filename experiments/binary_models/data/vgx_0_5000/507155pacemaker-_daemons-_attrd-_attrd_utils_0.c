int
attrd_failure_regex(regex_t *regex, const char *rsc, const char *op,
guint interval_ms)
{
char *pattern = NULL;
int rc;



if (rsc == NULL) {
pattern = strdup(ATTRD_RE_CLEAR_ALL);
} else if (op == NULL) {
pattern = crm_strdup_printf(ATTRD_RE_CLEAR_ONE, rsc);
} else {
pattern = crm_strdup_printf(ATTRD_RE_CLEAR_OP, rsc, op, interval_ms);
}


crm_trace("Clearing attributes matching %s", pattern);
rc = regcomp(regex, pattern, REG_EXTENDED|REG_NOSUB);
free(pattern);

return (rc == 0)? pcmk_ok : -EINVAL;
}