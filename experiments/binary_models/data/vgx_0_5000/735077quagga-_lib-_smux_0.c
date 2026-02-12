smux_register_mib (const char *descr, struct variable *var, 
size_t width, int num, 
oid name[], size_t namelen)
{
struct subtree *tree;

tree = (struct subtree *)malloc(sizeof(struct subtree));
oid_copy (tree->name, name, namelen);
tree->name_len = namelen;
tree->variables = var;
tree->variables_num = num;
tree->variables_width = width;
tree->registered = 0;
listnode_add_sort(treelist, tree);
}