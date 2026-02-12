int
update_attr_delegate(cib_t *cib, int call_options, const char *section,
const char *node_uuid, const char *set_type, const char *set_name,
const char *attr_id, const char *attr_name, const char *attr_value,
gboolean to_console, const char *user_name, const char *node_type)
{
pcmk__output_t *out = NULL;
int rc = pcmk_ok;

out = new_output_object(to_console ? "text" : "log");
if (out == NULL) {
return pcmk_err_generic;
}

rc = cib__update_node_attr(out, cib, call_options, section, node_uuid, set_type,
set_name, attr_id, attr_name, attr_value, user_name,
node_type);

out->finish(out, CRM_EX_OK, true, NULL);
pcmk__output_free(out);
return pcmk_rc2legacy(rc);
}