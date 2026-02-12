int register_savevm_live(const char *idstr,
uint32_t instance_id,
int version_id,
const SaveVMHandlers *ops,
void *opaque)
{
SaveStateEntry *se;

se = g_new0(SaveStateEntry, 1);
se->version_id = version_id;
se->section_id = savevm_state.global_section_id++;
se->ops = ops;
se->opaque = opaque;
se->vmsd = NULL;

if (ops->save_setup != NULL) {
se->is_ram = 1;
}

pstrcat(se->idstr, sizeof(se->idstr), idstr);

if (instance_id == VMSTATE_INSTANCE_ID_ANY) {
se->instance_id = calculate_new_instance_id(se->idstr);
} else {
se->instance_id = instance_id;
}
assert(!se->compat || se->instance_id == 0);
savevm_state_handler_insert(se);
return 0;
}