parse_value (cherokee_buffer_t *value, cherokee_avl_t *extensions)
{
char              *val;
char              *tmpp;
cherokee_buffer_t  tmp = CHEROKEE_BUF_INIT;

TRACE(ENTRIES, "Adding extensions: '%s'\n", value->buf);
cherokee_buffer_add_buffer (&tmp, value);

tmpp = tmp.buf;
while ((val = strsep(&tmpp, ",")) != NULL) {
TRACE(ENTRIES, "Adding extension: '%s'\n", val);
cherokee_avl_add_ptr (extensions, val, (void *)MAGIC);
}

cherokee_buffer_mrproper (&tmp);
return ret_ok;
}