gboolean
native_active(pe_resource_t * rsc, gboolean all)
{
for (GList *gIter = rsc->running_on; gIter != NULL; gIter = gIter->next) {
pe_node_t *a_node = (pe_node_t *) gIter->data;

if (a_node->details->unclean) {
pe_rsc_trace(rsc, "Resource %s: %s is unclean",
rsc->id, pe__node_name(a_node));
return TRUE;
} else if (a_node->details->online == FALSE && pcmk_is_set(rsc->flags, pe_rsc_managed)) {
pe_rsc_trace(rsc, "Resource %s: %s is offline",
rsc->id, pe__node_name(a_node));
} else {
pe_rsc_trace(rsc, "Resource %s active on %s",
rsc->id, pe__node_name(a_node));
return TRUE;
}
}
return FALSE;
}

struct print_data_s {
long options;
void *print_data;
};