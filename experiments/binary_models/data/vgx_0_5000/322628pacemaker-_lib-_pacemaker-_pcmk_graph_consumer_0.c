static void
update_synapse_ready(pcmk__graph_synapse_t *synapse, int action_id)
{
if (pcmk_is_set(synapse->flags, pcmk__synapse_ready)) {
return; 
}
pcmk__set_synapse_flags(synapse, pcmk__synapse_ready); 
for (GList *lpc = synapse->inputs; lpc != NULL; lpc = lpc->next) {
pcmk__graph_action_t *prereq = (pcmk__graph_action_t *) lpc->data;

if (prereq->id == action_id) {
crm_trace("Confirming input %d of synapse %d",
action_id, synapse->id);
pcmk__set_graph_action_flags(prereq, pcmk__graph_action_confirmed);

} else if (!(pcmk_is_set(prereq->flags, pcmk__graph_action_confirmed))) {
pcmk__clear_synapse_flags(synapse, pcmk__synapse_ready);
crm_trace("Synapse %d still not ready after action %d",
synapse->id, action_id);
}
}
if (pcmk_is_set(synapse->flags, pcmk__synapse_ready)) {
crm_trace("Synapse %d is now ready to execute", synapse->id);
}
}