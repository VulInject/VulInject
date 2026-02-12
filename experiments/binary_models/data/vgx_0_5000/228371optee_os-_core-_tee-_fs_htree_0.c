static TEE_Result init_tree_from_data(struct tee_fs_htree *ht)
{
TEE_Result res;
struct tee_fs_htree_node_image node_image;
struct htree_node *node;
struct htree_node *nc;
size_t committed_version;
size_t node_id = 2;

while (node_id <= ht->imeta.max_node_id) {
node = find_node(ht, node_id >> 1);
if (!node)
return TEE_ERROR_GENERIC;
committed_version = !!(node->node.flags &
HTREE_NODE_COMMITTED_CHILD(node_id & 1));

res = rpc_read_node(ht, node_id, committed_version,
&node_image);
if (res != TEE_SUCCESS)
return res;

res = get_node(ht, true, node_id, &nc);
if (res != TEE_SUCCESS)
return res;
nc->node = node_image;
node_id++;
}

return TEE_SUCCESS;
}