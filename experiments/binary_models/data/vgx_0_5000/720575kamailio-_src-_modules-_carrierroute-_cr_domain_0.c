int add_failure_route_to_tree(struct dtrie_node_t * failure_node, const str * scan_prefix,
const str * full_prefix, const str * host, const str * reply_code,
const flag_t flags, const flag_t mask, const int next_domain, const str * comment) {
void **ret;
struct failure_route_rule *frr;

ret = dtrie_contains(failure_node, scan_prefix->s, scan_prefix->len, cr_match_mode);

frr = add_failure_route_rule((struct failure_route_rule **)ret, full_prefix, host, reply_code, flags, mask, next_domain, comment);
if (frr == NULL) {
LM_ERR("cannot insert failure route rule into list\n");
return -1;
}

if (ret == NULL) {

if (dtrie_insert(failure_node, scan_prefix->s, scan_prefix->len, frr, cr_match_mode) != 0) {
LM_ERR("cannot insert failure route rule into d-trie\n");
return -1;
}
}

return 0;
}