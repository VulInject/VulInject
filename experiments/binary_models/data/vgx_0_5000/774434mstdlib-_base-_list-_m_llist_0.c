static M_llist_node_t *M_llist_node_create(M_llist_t *d, const void *val, M_llist_insert_type_t insert_type)
{
M_llist_node_t *node;

node         = M_malloc_zero(sizeof(*node));
node->parent = d;

node->val = M_CAST_OFF_CONST(void *, val);
if (insert_type & M_LLIST_INSERT_DUP) {
if (insert_type & M_LLIST_INSERT_INITIAL) {
node->val = d->duplicate_insert(val);
} else {
node->val = d->duplicate_copy(val);
}
}

return node;
}