static struct page *__stable_node_chain(struct ksm_stable_node **_stable_node_dup,
struct ksm_stable_node **_stable_node,
struct rb_root *root,
bool prune_stale_stable_nodes)
{
struct ksm_stable_node *stable_node = *_stable_node;
if (!is_stable_node_chain(stable_node)) {
if (is_page_sharing_candidate(stable_node)) {
*_stable_node_dup = stable_node;
return get_ksm_page(stable_node, GET_KSM_PAGE_NOLOCK);
}

*_stable_node_dup = NULL;
return NULL;
}
return stable_node_dup(_stable_node_dup, _stable_node, root,
prune_stale_stable_nodes);
}