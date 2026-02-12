void vmw_binding_state_scrub(struct vmw_ctx_binding_state *cbs)
{
struct vmw_ctx_bindinfo *entry;

list_for_each_entry(entry, &cbs->list, ctx_list) {
if (!entry->scrubbed) {
(void) vmw_binding_infos[entry->bt].scrub_func
(entry, false);
entry->scrubbed = true;
}
}

(void) vmw_binding_emit_dirty(cbs);
}