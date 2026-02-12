static int
attribute_list_default(pcmk__output_t *out, va_list args) {
pe_resource_t *rsc = va_arg(args, pe_resource_t *);
char *attr = va_arg(args, char *);
GHashTable *params = va_arg(args, GHashTable *);

const char *value = NULL;

if (params != NULL) {
value = g_hash_table_lookup(params, attr);
}
if (value != NULL) {
out->begin_list(out, NULL, NULL, "Attributes");
out->list_item(out, attr, "%s", value);
out->end_list(out);
} else {
out->err(out, "Attribute '%s' not found for '%s'", attr, rsc->id);
}

return pcmk_rc_ok;
}