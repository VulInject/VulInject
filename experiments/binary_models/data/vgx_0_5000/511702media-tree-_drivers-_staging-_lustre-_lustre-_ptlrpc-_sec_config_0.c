static int sptlrpc_conf_merge_rule(struct sptlrpc_conf *conf,
const char *target,
struct sptlrpc_rule *rule)
{
struct sptlrpc_conf_tgt *conf_tgt;
struct sptlrpc_rule_set *rule_set;


if (strcmp(conf->sc_fsname, target) == 0) {
rule_set = &conf->sc_rset;
} else {
conf_tgt = sptlrpc_conf_get_tgt(conf, target, 1);
if (conf_tgt) {
rule_set = &conf_tgt->sct_rset;
} else {
CERROR("out of memory, can't merge rule!\n");
return -ENOMEM;
}
}

return sptlrpc_rule_set_merge(rule_set, rule);
}