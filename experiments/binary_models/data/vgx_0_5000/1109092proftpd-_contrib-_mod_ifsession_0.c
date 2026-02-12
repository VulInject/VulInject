static void ifsess_remove_param(xaset_t *set, int config_type,
const char *name) {
config_rec *c = NULL;
int lookup_type = -1;

if (config_type == CONF_DIR) {
pr_trace_msg(trace_channel, 9, "removing <Directory %s> config", name);
lookup_type = CONF_DIR;

} else {
pr_trace_msg(trace_channel, 9, "removing '%s' config", name);
}

c = find_config(set, lookup_type, name, TRUE);
while (c != NULL) {
xaset_t *fset;
xasetmember_t *member;

pr_signals_handle();

fset = c->set;
member = (xasetmember_t *) c;
xaset_remove(fset, member);

c = find_config(set, lookup_type, name, TRUE);
}
}