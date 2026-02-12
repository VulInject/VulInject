static int
donotq_insert(struct iter_donotq* dq, struct sockaddr_storage* addr, 
socklen_t addrlen, int net)
{
struct addr_tree_node* node = (struct addr_tree_node*)regional_alloc(
dq->region, sizeof(*node));
if(!node)
return 0;
if(!addr_tree_insert(&dq->tree, node, addr, addrlen, net)) {
verbose(VERB_QUERY, "duplicate donotquery address ignored.");
}
return 1;
}