int
cli_resource_print_operations(const char *rsc_id, const char *host_uname,
bool active, pe_working_set_t * data_set)
{
pcmk__output_t *out = data_set->priv;
int rc = pcmk_rc_no_output;
GList *ops = find_operations(rsc_id, host_uname, active, data_set);

if (!ops) {
return rc;
}

out->begin_list(out, NULL, NULL, "Resource Operations");
rc = pcmk_rc_ok;

for (GList *lpc = ops; lpc != NULL; lpc = lpc->next) {
xmlNode *xml_op = (xmlNode *) lpc->data;
out->message(out, "node-and-op", data_set, xml_op);
}

out->end_list(out);
return rc;
}